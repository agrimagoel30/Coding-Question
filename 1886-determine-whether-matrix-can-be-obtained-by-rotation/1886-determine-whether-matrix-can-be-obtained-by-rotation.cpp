class Solution {
public:

bool check(vector<vector<int>>& matrix, vector<vector<int>>& target){
     int m=matrix.size();
        int n=matrix[0].size();
        for(int i=0;i<m;i++){
            for(int j=i+1;j<n;j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        for(int i=0;i<m;i++){
            reverse(matrix[i].begin(),matrix[i].end());
        }
        if(matrix==target)
        return true;
        return false;
}
    bool findRotation(vector<vector<int>>& matrix, vector<vector<int>>& target) {
            int m=matrix.size();
        int n=matrix[0].size();
        int tot=m*n;
        while(tot--){
            if(check(matrix,target))
            return true;
        }
        return false;
    }
};