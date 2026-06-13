class Solution {
public:


    
    int solve(vector<int>& nums, int k){

        if(k<0) return 0;
        int n=nums.size();


       int i=0;
       int j=0;
       
       int cnt=0;
       int odd=0;

       while(j<n){

        if(nums[j]%2!=0) odd++;
    

        while(odd>k){
        if(nums[i] % 2!=0) odd--;
           i++;

        }

        cnt+=j-i+1;
        j++;
       }
        return cnt;

    }

    int numberOfSubarrays(vector<int>& nums, int k) {
        
        return solve(nums,k)-solve(nums,k-1);

 


   
   
        
    }
};