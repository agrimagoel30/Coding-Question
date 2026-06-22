class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        int maxval=*max_element(costs.begin(),costs.end());
        vector<int>freq(maxval+1,0);
        for(int num:costs){
            freq[num]++;
        }
        int index=0;
        for(int i=0;i<freq.size();i++){
            while(freq[i]>0){
                costs[index++]=i;
                freq[i]--;
            }
        }
        int noofbar=0;
        long long sum=0;
        for(int i=0;i<costs.size();i++){
             sum+=costs[i];
            if(sum<=coins)
            noofbar++;
            else
            break;
        }
        return noofbar;
    }
};