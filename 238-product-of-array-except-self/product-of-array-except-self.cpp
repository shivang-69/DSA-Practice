class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        int n=nums.size();

        vector<int>l(n,0);
        vector<int>r(n,0);

        vector<int>ans(n,0);

         l[0]=1;
         r[n-1]=1;


        for(int i=1;i<n;i++) l[i]=l[i-1]*nums[i-1];
        for(int j=n-2;j>=0;j--)  r[j]=r[j+1]*nums[j+1];


        for(int i=0;i<n;i++) ans[i]=l[i]*r[i];

        return ans;
        

        
        
    }
};