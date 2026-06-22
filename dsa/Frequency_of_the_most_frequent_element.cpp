class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int l=0;
        int result=0;
        long long curr=0;
        for(int r=0;r<n;r++){
            curr+=nums[r];
            while(1ll*(r-l+1)*nums[r]-curr>k){
                curr-=nums[l];
                l++;
            }
            result=max(result,r-l+1);
        }
        return result;
    }
};