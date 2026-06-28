class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
       int maxi=INT_MIN;
        for(int i=0;i<candies.size();i++){
            if(candies[i]>maxi)
            maxi=candies[i];
        }
        vector<bool>result;
        for(int i=0;i<candies.size();i++){
            int updated=candies[i]+extraCandies;
            if(updated>=maxi)
            result.push_back(true);
            else
            result.push_back(false);
        }
        return result;
    }
};