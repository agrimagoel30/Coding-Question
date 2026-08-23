class Solution {
public:
    bool sumGame(string num) {
        int leftsum=0;
        int rightsum=0;
        int n=num.size();
        int leftq=0,rightq=0;
        for(int i=0;i<n/2;i++){
            if(num[i]=='?')
            leftq++;
            else
            leftsum+=num[i]-'0';
        }
        for(int i=n/2;i<n;i++){
            if(num[i]=='?')
            rightq++;
            else
            rightsum+=num[i]-'0';
            }

        
        int diff=leftsum-rightsum;
        if(diff*2+9*(leftq-rightq)==0)
        return false;
        return true;
    }
};