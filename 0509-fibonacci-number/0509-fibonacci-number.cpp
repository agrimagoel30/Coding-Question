class Solution {
public:
    int fib(int n) {
        int a=0;
        int b=1;
        int sum=0;
        int i=0;
        if(n==0)
        return 0;
        if(n==1)
        return 1;
        while(i<n-1){
            sum=a+b;
            a=b;
            b=sum;
            i++;
        }
        return sum;
    }   
};