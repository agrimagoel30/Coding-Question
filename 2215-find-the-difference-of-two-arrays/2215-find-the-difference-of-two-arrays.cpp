class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
     unordered_set<int>st1(nums1.begin(),nums1.end());
     unordered_set<int>st2(nums2.begin(),nums2.end());
     vector<int>ans1,ans2;
     for(int el: st1){
        if(st2.find(el)==st2.end())
        ans1.push_back(el);
     }
     for(int el: st2){
        if(st1.find(el)==st1.end())
        ans2.push_back(el);
     }
     vector<vector<int>>answer;
     answer.push_back(ans1);
     answer.push_back(ans2);
     return answer;
    }
};