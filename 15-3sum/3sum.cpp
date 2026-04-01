class Solution {
public:

    void twosum(vector<int>& nums,vector<vector<int>>&ans,int s,int target){
           int j=s;
           int k=nums.size()-1;

           while(j<k){
            if(nums[j]+nums[k]>target) k--;
            else if(nums[j] + nums[k]<target) j++;

            else {
                ans.push_back({-target,nums[j],nums[k]});
                while(j<k && nums[j]==nums[j+1]) j++;
                while(j<k && nums[k]==nums[k-1]) k--;

                j++;
                k--;
        }


    }
}
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>ans;
       
        int n=nums.size();
        if(n<3) return ans;

        sort(nums.begin(),nums.end());

        for(int i=0;i<n-2;i++){
            if(i>0 && nums[i]==nums[i-1]) continue;
            
            twosum(nums,ans,i+1,-nums[i]);
             

        }

        return ans;
        
    }
};