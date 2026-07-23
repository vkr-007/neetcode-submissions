class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit= 0;
        int mi= prices[0];
        for(int i=1;i<prices.size();i++){
            int x= prices[i];
            mi= min(mi,x);
            profit= max(profit,x-mi);
        }
        return profit;
    }
    
};