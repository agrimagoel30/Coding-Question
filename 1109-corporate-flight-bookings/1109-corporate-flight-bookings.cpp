class Solution {
public:
    vector<int> corpFlightBookings(vector<vector<int>>& bookings, int n) {
        vector<int>ans(n,0);
        for(int i=0;i<bookings.size();i++){
            int j=bookings[i][0];
            int end=bookings[i][1];
            while(j<=end){
                ans[j-1]+=bookings[i][2];
                j++;
            }
        }
        return ans;
    }
};