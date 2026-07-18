class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int cnt1=0,cnt2=0;
        int el1=INT_MIN;
        int el2=INT_MIN;
        for(int i=0;i<nums.size();i++){
            if(cnt1==0 && el2!=nums[i])
            {
                cnt1++;
                el1=nums[i];
            }else if(cnt2==0 && el1!=nums[i]){
                cnt2++;
                el2=nums[i];
            }else if(el1==nums[i])
            cnt1++;
            else if(el2==nums[i])
            cnt2++;
            else{
                cnt1--;
                cnt2--;
            }

        }
        int cntfn1=0;
        int cntfn2=0;
        vector<int>ls;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==el1)
            cntfn1++;
            if(nums[i]==el2)
            cntfn2++;
        }
        int n=nums.size();
        if(cntfn1>=((int)n/3+1))
        ls.push_back(el1);
        if(cntfn2>=((int)n/3+1))
        ls.push_back(el2);
        sort(ls.begin(),ls.end());
        return ls;
    }
};