class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int n=prices.size();
        int p=0;

        int maxp=0;
        int lp=INT_MAX;

        for(int i=0;i<n;i++){
            lp=min(lp,prices[i]);

            p=prices[i]-lp;


            maxp=max(maxp,p);


        }




        return maxp;
        
    }
};