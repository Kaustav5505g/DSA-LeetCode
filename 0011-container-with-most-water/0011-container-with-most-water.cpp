class Solution {
public:
    int maxArea(vector<int>& height) {
        int lp=0,rp=height.size()-1;
        int mw=0;
        while (lp<rp){
            int w=rp-lp;
            int ht=min(height[lp],height[rp]);
            int currwt=w*ht;
            mw=max(mw,currwt);

        height[lp]<height[rp]?lp++:rp--;
        }return mw;
    }
};