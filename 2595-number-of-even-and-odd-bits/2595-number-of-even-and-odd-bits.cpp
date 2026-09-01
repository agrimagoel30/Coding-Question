class Solution {
public:
    vector<int> evenOddBit(int n) {
        int c=0;
        int even=0,odd=0;
        while(n!=0){
            if((n&1)!=0){
                if(c%2==0)
                even++;
                else
                odd++;
            }
            n=n>>1;
            c++;
        }
        return {even,odd};
    }
};