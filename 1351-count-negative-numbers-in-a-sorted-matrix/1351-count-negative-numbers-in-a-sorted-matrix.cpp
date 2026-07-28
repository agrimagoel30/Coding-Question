class Solution {
public:
int count_in_row(vector<int>rowmatrix){
    int n=rowmatrix.size();
int st=0;
int end=n-1;
int mid;
while(st<=end){
    mid=(st+(end-st)/2);
    if(rowmatrix[mid]>=0)
    st=mid+1;
    else 
    end=mid-1;
}
return n-st;
}
    int countNegatives(vector<vector<int>>& grid) {
        int ans=0;
        for(int i=0;i<grid.size();i++){
            int c=count_in_row(grid[i]);
            ans+=c;
        }
        return ans;
    }
};