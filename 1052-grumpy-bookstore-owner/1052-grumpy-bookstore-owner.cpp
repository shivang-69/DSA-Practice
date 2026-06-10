class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {

        int n=customers.size();

        int sum=0;

        for(int i=0;i<n;i++){
            if(grumpy[i]==0) sum+=customers[i];
        }

        int curr=0;
        int maxs=0;

        for(int i=0;i<minutes;i++){
            if(grumpy[i]==1) curr+=customers[i];           
        }

        maxs=curr;

        int i=0;
        int j=minutes;

        while(j<n){
            if(grumpy[j]==1) curr+=customers[j];   
            if(grumpy[i]==1) curr-=customers[i];   

            maxs=max(curr,maxs);

            i++;
            j++;
        }

        return sum+maxs;

    } 
};