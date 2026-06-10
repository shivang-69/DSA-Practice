class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n=cardPoints.size();

        int curr=0;

        for(int i=0;i<k;i++) curr+=cardPoints[i];

        int maxi=curr;

        int i=k-1;
        int j=n-1;

        while(i>=0){
            curr-=cardPoints[i];
            i--;
            curr+=cardPoints[j];
            j--;

            maxi=max(maxi,curr);
        }

        return maxi;
        
    }
};