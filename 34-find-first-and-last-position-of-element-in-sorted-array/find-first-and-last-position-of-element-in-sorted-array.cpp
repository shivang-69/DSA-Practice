class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();

        vector<int>re(2,-1);

        int l=0;
        int r=n-1;

        int ans1=n;

        while(l<=r){
            int mid=l+(r-l)/2;

            if(nums[mid]>=target){
                ans1=mid;
                r=mid-1;
            }

            else l=mid+1;
        }

       if(ans1==n || nums[ans1]!=target) return{-1,-1};

       re[0]=ans1;

        l=0;
        r=n-1;
        int ans2=n;

        while(l<=r){
            int mid=l+(r-l)/2;

            if(nums[mid]<=target){
                ans2=mid;
                l=mid+1;
            }

            else r=mid-1;;
        }

        re[1]=ans2;

        return re;


        
        
    }
};