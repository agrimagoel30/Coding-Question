class Solution {
public:
    int maxArea(vector<int>& height) {
        int l=0;
        int r=size(height)-1;
      int  max_area=0;
        while(l<r)
        {
            int mini=min(height[l],height[r]);
            int area=((r-l)*mini);
            if(area>max_area)
            max_area=area;
            if(height[l]<height[r])
            l++;
            else
            r--;
        }
        return max_area;
    }
};