class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k=2;
        if(nums.size()<=2)
        return nums.size();
        for(int j=2;j<nums.size();j++){
            if(nums[j]!=nums[k-2]){
                nums[k]=nums[j];
                k++;
            }
        }
        return k;
    }
};