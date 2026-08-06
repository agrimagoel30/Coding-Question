class Solution {
public:
    int lengthOfLastWord(string s) {
        int n=s.length();
        int l=0;
        int ans=0;
        for(int i=0;i<n;i++){
            if(s[i]!=' '){
            l++;
            ans=l;
            }
            else{
            l=0;
            }
        }
        return ans;
    }
};