class Solution {
public:
    int firstMissingPositive(vector<int>& mat) {
        bool check=false;
         int n=mat.size();
        for(int i=0;i<mat.size();i++){
            if(mat[i]==1)
            check=true;
            if(mat[i]<=0 || mat[i]>n)
            mat[i]=1;
        }
        if(!check)
        return 1;
        for(int i=0;i<n;i++){
            int idx=abs(mat[i]);
            if(mat[idx-1]<0)
            continue;
            mat[idx-1]*=-1;
        }
        for(int i=0;i<n;i++){
            if(mat[i]>0)
            return i+1;
        }
        return n+1;
    }
};