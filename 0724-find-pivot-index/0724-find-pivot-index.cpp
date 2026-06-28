class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        long long left=0;
        long long right=0;
        int pivot=0;
        long long sum=0;
        for(int i=1;i<nums.size();i++){
            sum+=nums[i];
        }
        right=sum;
        int n=nums.size();
        while(pivot<n){
            if(left==right)
            return pivot;
            else{
                left+=nums[pivot];
                pivot++;
                if(pivot<n)
                right-=nums[pivot];
            }
        }
        return -1;
    }
};