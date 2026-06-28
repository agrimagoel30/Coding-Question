class Solution {
public:
    int maximumElementAfterDecrementingAndRearranging(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        nums[0]=1;
        for(int i=1;i<nums.size();i++){
            int val=nums[i];
            int diff=abs(nums[i]-nums[i-1]);
            if(diff<=1)
            continue;
            else
            nums[i]=nums[i-1]+1;
        }
        int n=nums.size();
        return nums[n-1];
    }
};