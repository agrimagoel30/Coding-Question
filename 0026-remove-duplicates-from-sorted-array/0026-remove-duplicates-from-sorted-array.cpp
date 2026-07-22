class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        // int i=1;
        // while(i<nums.size()){
        //     if(nums[i]==nums[i-1])
        //     nums.erase(nums.begin()+i);
        //     else
        //     i++;
        // }
        // return nums.size();
        int i=0;
        for(int j=1;j<nums.size();j++){
            if(nums[j]!=nums[i]){
                i++;
                nums[i]=nums[j];
            }
        }
        return i+1;
    }
};