class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        // int i=0;
        // int n=nums.size();
        // while(i<n){
        //     if(nums[i]==0){
        //     nums.erase(nums.begin()+i);
        //     nums.push_back(0);
        //     n--;
        //     }
        //     else
        //     i++;
        // }
        int i=0;
        int j=0;
        int n=nums.size();
        while(i<n){
            if(nums[i]!=0){
              swap(nums[i],nums[j]);
                j++;
            }
            i++;
        }
    }
};