class Solution {
public:
    bool checkDivisibility(int n) {
        int sum=0,pro=1;
        int temp=n;
        while(temp!=0){
            int r=temp%10;
            sum+=r;
            pro*=r;
            temp/=10;
        }
        if(n%(sum+pro)==0)
        return true;
        else
        return false;
    }
};