class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        int i=0;
        int j=0;
        int maxlen=INT_MIN;
        while(j<nums.size()){
            mp[nums[j]]++;
            while(mp[nums[j]]>k){
                    mp[nums[i]]--;
                    i++;
            }
         maxlen = max(maxlen, j - i + 1);
         j++;
        }
        return maxlen;
    }   
};