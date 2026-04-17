class Solution {
public:
    int findMin(vector<int>& nums) {
        int n=nums.size();

        // int p=0;

        // for(int i=0;i<n;i++){
        //     if(nums[i]>nums[i+1])  p=i+1;
        // }
        
        // int i=0;
        // int j=p-1;

        int min=INT_MAX;

        for(int i=0;i<n;i++){
            if(nums[i]<min) min=nums[i];
            
        }

        return min;


        
        
    }
};