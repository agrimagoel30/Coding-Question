class Solution {
public:
    int countSubarrays(vector<int>& nums) {
        int cnt = 0;
        for (int i = 0; i + 2 < nums.size(); i++) {
            int sum = nums[i] + nums[i + 2];
            if (2*sum == nums[i + 1])
                cnt++;
        }
        return cnt;
    }
};