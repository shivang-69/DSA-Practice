class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n=nums.size();

        int i=0;
        int j=0;
        int ze=0;
        int maxl=0;

        while(j<n){
            if(nums[j]==0) ze++;

            while(ze>k){
                if(nums[i]==0) ze--;
                i++;
            }

            maxl=max(maxl,j-i+1);

            j++;

            
        }

        return maxl;


        
    }
};