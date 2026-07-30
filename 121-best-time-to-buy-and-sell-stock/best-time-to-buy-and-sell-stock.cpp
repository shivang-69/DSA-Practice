class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();

        int lp=INT_MAX;
        int mp=0;

        for(int i=0;i<n;i++){
            lp=min(lp,prices[i]);

            int profit=prices[i]-lp;

            mp=max(profit,mp);

            
        }
        return mp;
    } 
    
};