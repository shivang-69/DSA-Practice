class Solution {
public:

   void twosum(vector<int>& nums,vector<vector<int>>&ans,int i,int j,long long  target){
    int k=j+1,l=nums.size()-1;

    while(k<l){
      long long sum = nums[k] + nums[l]; 
      if(sum>target) l--;
      else if(sum<target) k++;

      else{
          ans.push_back({nums[i],nums[j],nums[k],nums[l]});
          while(k<l && nums[k]==nums[k+1]) k++;
          while(k<l && nums[l]==nums[l-1]) l--;

          k++;
          l--;

      }

    }



    }
    vector<vector<int>> fourSum(vector<int>& nums, int   target) {
        vector<vector<int>>ans;
        int n=nums.size();

        if(n<4) return ans;

        sort(nums.begin(),nums.end());

        for(int i=0;i<n-3;i++){
            if(i>0 && nums[i]==nums[i-1]) continue;

        for(int j=i+1;j<n-2;j++){
             if(j>i+1 && nums[j]==nums[j-1]) continue;

             long long subtarget=(long long)target-nums[i]-nums[j];

             twosum(nums,ans,i,j,subtarget);
        }

    }

    return ans;
        }
        
    
};