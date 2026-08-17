class Solution {
public:
    const int M=1e9+7;
    int expo(long long a,long long  b){
        if(b==0)
        return 1;
        long long half=expo(a,b/2);
        long long res= (half*half)%M;
        if(b%2==1)
        res=(res*a)%M;
        return res;
        
    }
    int countGoodNumbers(long long n) {
        long long  even=(n+1)/2;
        long long odd=n/2;
        return (long long)expo(5,even)*expo(4,odd)%M;
        
    }
};