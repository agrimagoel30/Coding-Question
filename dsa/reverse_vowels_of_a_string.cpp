class Solution {
public:
    string reverseVowels(string s) {
        vector<char>vovel;
        set<char>st={'a','e','i','o','u','A','E','I','O','U'};
        for(int i=0;i<s.length();i++){
            if(st.find(s[i])!=st.end())
            vovel.push_back(s[i]);
        }
        reverse(vovel.begin(),vovel.end());
        int c=0;
        for(int i=0;i<s.length();i++){
            if(st.find(s[i])!=st.end()){
            s[i]=vovel[c];
            c++;
            }
        }
        return s;
    }
};