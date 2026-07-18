class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>poss;
        vector<int>neg;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<0)
            neg.push_back(nums[i]);
            else
            poss.push_back(nums[i]);
        }
        vector<int>ans;
        int n=nums.size();
        for(int i=0;i<n/2;i++){
            ans.push_back(poss[i]);
            ans.push_back(neg[i]);
        }
        return ans;
    }
};