class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        vector<int>ans(nums.size(),0);
        int zcnt=0;
        int p=1;

        for(int i=0;i<nums.size();i++){
            if(nums[i]==0) zcnt++;
            else {
                p*=nums[i];

            }
        }

        for(int i=0;i<nums.size();i++){
            if(zcnt>1) ans[i]=0;

            else if(zcnt==1){
                if(nums[i]==0) ans[i]=p;
                else ans[i]=0;
            }

            else  ans[i]=p/nums[i];
            
        }
        return ans;
    }
};