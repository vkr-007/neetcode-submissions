class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit= 0;
        for(int i=1;i<prices.size();i++){
            
            int x= *min_element(prices.begin(), prices.begin()+i);
            if(prices[i]>x){
                profit= max(profit,prices[i]-x);
            }
            
        }
        return profit;
    }
    
};
