class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int maxProfit = 0;
        int prevmin = INT_MAX;
        for(int i=0;i<n;i++){
            prevmin = min(prevmin, prices[i]);
            if(prices[i]>prevmin){
                maxProfit = max(maxProfit, prices[i]-prevmin);
            }
        }
        return maxProfit;
    }
};
