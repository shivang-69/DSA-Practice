class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

    unordered_set<int>st(nums.begin(),nums.end());
    
    
    int maxc=0;
    
    for(int nums:st){
        
        if(st.find(nums-1)==st.end()){
          int cnt=1;
          int curr=nums;
        
        
        while(st.find(curr+1)!=st.end()){
            cnt++;
            curr++;
            
        
        }
         maxc=max(maxc,cnt);

    }

}
        return maxc;
    
        
    }
};