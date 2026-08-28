class Solution {
public:
    int longestConsecutive(vector<int>& nums) {


       unordered_set<int>st(nums.begin(),nums.end());

        int n=nums.size();
        int maxc=0;
        
        
        for(int nums:st){
            int cnt=0;
            int curr=nums;

            if(st.find(nums-1)==st.end()){
                cnt++;
                curr=nums;


            while(st.find(curr+1)!=st.end()){ 
                cnt++;
                curr++;

            }

            

            }
            maxc=max(cnt,maxc);
                
            
        }

        return maxc;
        
    }
};