class Solution {
public:
    int rearrangeCharacters(string s, string target) {
         vector<int>mp(26,0);
      for(char ch:s){
        mp[ch-'a']++;

      }
      unordered_map<char,int>mpp;
      for(char ch: target){
        mpp[ch]++;
      }
      int mini=INT_MAX;
      for(auto &ch:mpp)
      {
         mini=min(mini,mp[ch.first-'a']/mpp[ch.first]);
      }
      return mini;
    }
};