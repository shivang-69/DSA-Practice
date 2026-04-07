class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        

        int n=intervals.size();
    
    sort(intervals.begin(),intervals.end());
    
    int i=0,j=1;
    
    vector<vector<int>>ans;
    
    
    vector<int>curr=intervals[i];
    
    
    while(j<n){
        vector<int>next=intervals[j];
        
        int curr_e=curr[1];
        int next_s=next[0];
        
        
        int next_e=next[1];
        
        if(curr_e<next_s){
            ans.push_back(curr);
            curr=next;
            
        }
        
        else{
            curr[1]=max(curr_e,next_e);
            
        }
        j++;
    }
    
    ans.push_back(curr);
    return ans;

    }
};