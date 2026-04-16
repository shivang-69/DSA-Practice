class Solution {
public:
    int search(vector<int>& nums, int target) {

        int pivot=0;

        int n=nums.size();

        for(int i=0;i<n-1;i++){
            if(i+1<n && nums[i]>nums[i+1])  pivot=i+1;
        }

        int l=0;
        int r=pivot-1;

           while(l<=r){
            int mid=l+(r-l)/2;

            if(nums[mid]==target) return mid;
            else if(nums[mid]<target) l=mid+1;

            else  r=mid-1;
            

            }


            l=pivot;
            r=n-1;


        while(l<=r){
            int mid=l+(r-l)/2;

            if(nums[mid]==target) return mid;
            else if(nums[mid]<target) l=mid+1;

            else  r=mid-1;
            

            }


            return -1;

        

        
        
    }
};