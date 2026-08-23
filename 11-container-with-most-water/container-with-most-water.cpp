class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int ans=0;
        int lp=0;
        int rp=n-1;
       while(lp<rp){
        ans=max(ans,(rp-lp)*(min(height[lp],height[rp])));
        if(height[lp]<height[rp]){
            lp++;
        }
        else{
            rp--;
        }
       }
       return ans;
        

        
    }
};