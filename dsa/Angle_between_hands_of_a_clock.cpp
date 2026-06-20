class Solution {
public:
    double angleClock(int hour, int minutes) {
        double a=minutes/12.0;
        double b=(double)minutes-a;
        double c=hour%12;
        double finalmin=abs(b-(c*5.0));
       double res=finalmin*6;
         if (res> 180.0) {
            return 360.0 - res;
        }
        return res;
    }
};