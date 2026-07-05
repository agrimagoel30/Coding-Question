class Solution {
public:
    bool canMakeSubsequence(string s, string t) {
        string ans=t;
        int m=s.size();
        int n=t.size();
        vector<int>pref(m,-1),suff(m,-1);
        int i=0;
        for(int j=0;j<n && i<m ;j++){
            if(s[i]==t[j])
            {
                pref[i]=j;
                i++;
            }
        }
        if(i==m)
            return true;
        i=m-1;
        for(int j=n-1;j>=0 && i>=0;j--){
            if(s[i]==t[j]){
                suff[i]=j;
                i--;
            }
            
        }
        for(int k=0;k<m;k++){
            int left=-1;
            int right=n;
            if(k>0){
                if(pref[k-1]==-1)
                    continue;
                left=pref[k-1];
            }
            if(k<m-1){
                if(suff[k+1]==-1)
                    continue;
                right=suff[k+1];
            }
            if(left+1<right)
                return true;
        }
        return false;
    }
};