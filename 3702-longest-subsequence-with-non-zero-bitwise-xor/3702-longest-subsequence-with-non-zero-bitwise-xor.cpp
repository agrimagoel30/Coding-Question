class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int ans=0;
        bool zero=true;
        for(int i=0;i<nums.size();i++){
            ans=ans^nums[i];
            if(nums[i]!=0)
            zero=false;
        }
        if(zero==true)
        return 0;
        if(ans==0)
        return nums.size()-1;
        else
        return nums.size();
    }
};