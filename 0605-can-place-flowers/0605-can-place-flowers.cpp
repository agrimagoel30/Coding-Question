class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int c=0;
        if(flowerbed.size()==1)
        {
            if(flowerbed[0]==1){
                if(n<1)
            return true;
            else
            return false;
            }
            else
            {
                if(n<=1)
                return true;
                else
                return false;
            }
        }
        if(flowerbed[0]==0){
            if(flowerbed[1]!=1){
            flowerbed[0]=1;
            c++;
            }
        }
        if(n==0)
        return true;
        for(int i=1;i<flowerbed.size()-1;i++){
            if(flowerbed[i]==0){
                if(flowerbed[i-1]==1 || flowerbed[i+1]==1)
                continue;
                else{
                    flowerbed[i]=1;
                c++;
                }
            }else{
            continue;
            }
            
        }
        int last = flowerbed.size() - 1;

if(flowerbed[last] == 0 && flowerbed[last-1] == 0){
    flowerbed[last] = 1;
    c++;
}
        return (c>=n)?true:false;
    }
};