class Solution {
public:
    int countCompleteSubarrays(vector<int>& nums) {
       unordered_set<int>st(nums.begin(),nums.end());
       int sizz=st.size();
        int final=0;
        for(int i=0;i<nums.size();i++){
            int cnt=0;
                    unordered_map<int,int>mp;
            for(int j=i;j<nums.size();j++){
                if(mp[nums[j]]==0)
                cnt++;
                mp[nums[j]]++;
                if(cnt==sizz)
                final++;
            }
        }
        return final;
    }
};