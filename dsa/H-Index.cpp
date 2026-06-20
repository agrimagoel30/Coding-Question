#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int hIndex(vector<int>& citations) {
        sort(citations.begin(),citations.end(),greater<int>());
        int h=0;
        for(int i=0;i<citations.size();i++){
           if(citations[i]>=i+1)
           h=i+1;
           else
           break;
        }
            return h;
    }
};

int main() {
    // Optimize standard I/O operations for speed
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
vector<int> citations = {3,0,6,1,5};
Solution s;
cout << s.hIndex(citations);
    

    return 0;
}