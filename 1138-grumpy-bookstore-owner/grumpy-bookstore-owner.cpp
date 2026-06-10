class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {

        int n=customers.size();
        int ans=0;

        for(int i=0;i<n;i++){ 
            if(grumpy[i]==0) ans+=customers[i];
        }


        int extra=0;

        for(int i=0;i<minutes;i++){
            if(grumpy[i]==1) extra+=customers[i];

        }

        int maxi=extra;

        int i=0;
        int j=minutes;

        while(j<n){
            if(grumpy[i]==1) extra-=customers[i];
            i++;
            if(grumpy[j]==1) extra+=customers[j];
            j++;

            maxi=max(extra,maxi);
        }

        ans+=maxi;

        return ans;

        

        
        
    }
};