class Solution {
public:
    long long totalCost(vector<int>& costs, int k, int candidates) {
        long long ans=0;
        int i=0;
        int n=costs.size();
        int j=n-1;
        priority_queue<int, vector<int>, greater<int>>pq1;
        priority_queue<int,vector<int>, greater<int>>pq2;
        int hired=0;
        while(hired<k){
            while(pq1.size()<candidates && i<=j){
                pq1.push(costs[i++]);
            } 
            while(pq2.size()<candidates && j>=i){
                pq2.push(costs[j--]);
            }
            int mini1=(pq1.size()>0)?pq1.top():INT_MAX;
            int mini2=(pq2.size()>0)?pq2.top():INT_MAX;
            if(mini1<=mini2)
            {
                ans+=mini1;
                pq1.pop();
            }
            else 
            {
                ans+=mini2;
                pq2.pop();
            }
            hired++;
        }
        return ans;
    }
};