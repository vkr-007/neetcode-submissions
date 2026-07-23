class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int p= 0;
        int mi=prices[0];
        for(auto x: prices){
            mi= min(mi, x);
            p = max(p,x-mi);

        }
        return p;
    }
    
};
