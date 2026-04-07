class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {

        sort(intervals.begin(),intervals.end());

        int i=0,j=1;
        int count=0;

        int n=intervals.size();

     while(j<n){

        vector<int>curr=intervals[i];
        vector<int>next=intervals[j];

        int curr_s=curr[0];
        int curr_e=curr[1];

        int next_s=next[0];
        int next_e=next[1];

             if(curr_e<=next_s){
                i=j;
                j++;

             }

             else if(curr_e <= next_e){
                j++;
                count++;

             }

             else {
                i=j;
                j++;
                count++;
             }



        }

        return count;
        
    }
};