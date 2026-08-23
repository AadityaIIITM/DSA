class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int bb=prices[0];
        int ans=0;
        for(int i=0;i<n;i++){
            if(prices[i]>bb){
                ans=max(ans,prices[i]-bb);
            }
            bb=min(bb,prices[i]);
        }
        return ans;
        
    }
};