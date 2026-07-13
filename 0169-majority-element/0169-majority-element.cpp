class Solution {
public:
    int majorityElement(vector<int>& nums) {

        int n=nums.size();

        unordered_map<int,int>mp;

        for(int i=0;i<n;i++){
            mp[nums[i]]++;

            int a=n/2;

            if(mp[nums[i]]>a) return nums[i];
        }

        return 0;

    }
        
    
};