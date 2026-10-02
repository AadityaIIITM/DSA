class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max_profit=0;
        int n=prices.size();
        int best_buy=prices[0];
        for(int i=0;i<n;i++){
            best_buy=min(best_buy,prices[i]);
            max_profit=max(max_profit,prices[i]-best_buy);
            

        }
        return max_profit;
        
    }
};