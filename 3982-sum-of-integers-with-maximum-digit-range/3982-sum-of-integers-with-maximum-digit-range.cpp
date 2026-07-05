class Solution {
public:
    int find (int val){
        int largest=INT_MIN;
        int smallest=INT_MAX;
        while(val!=0){
            int r=val%10;
            if(r<=smallest)
                smallest=r;
            if(r>=largest)
                largest=r;
            val/=10;
        }
        return largest-smallest;
    }
    int maxDigitRange(vector<int>& nums) {
        vector<pair<int, int>> arr; // {number, range}
                int maxRange = -1;
        for(int i=0;i<nums.size();i++){
        int diff=find(nums[i]);
arr.push_back({nums[i], diff});
            maxRange = max(maxRange, diff);       
        }
        int sum = 0;
        for (auto &p : arr) {
            if (p.second == maxRange)
                sum += p.first;
        }

        return sum;
    }
};