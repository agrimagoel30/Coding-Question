class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        vector<int>prod;
        int n=potions.size();
        vector<int>tot;
        sort(potions.begin(),potions.end());
        for(int i=0;i<spells.size();i++){
            long long prod=0;
            int idx=n;
            int low=0;
            int high=n-1;
          while(low<=high){
            int mid=low+(high-low)/2;
            long long prod=(long long)spells[i]*potions[mid];
            if(prod>=success){
                high=mid-1;
                idx=mid;
            }else{
                low=mid+1;
            }
          }
          tot.push_back(n-idx);
        }
        return tot;
    }
};