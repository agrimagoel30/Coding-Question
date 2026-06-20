class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        vector<int>alti;
        alti.push_back(0);
        int val=0;
        for(int i=0;i<gain.size();i++){
            val=val+gain[i];
            alti.push_back(val);
        }
        int maxi=INT_MIN;
        for(int i=0;i<alti.size();i++){
        maxi=max(maxi,alti[i]);
        }
        return maxi;
    }
};