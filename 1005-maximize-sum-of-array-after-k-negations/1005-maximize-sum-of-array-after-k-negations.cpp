class Solution {
public:
    int largestSumAfterKNegations(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size() && k > 0; i++) {
            if (nums[i] < 0) {
                nums[i] = -nums[i];
                k--;
            }
        }
        int sum=0;
        for(int i:nums){
            sum+=i;
        }
        if(k%2==1){
            int mini=*min_element(nums.begin(),nums.end());
            return sum-2*mini;
        }
        return sum;
    }
};