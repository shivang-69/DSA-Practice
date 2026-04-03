class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int>ans;
        int n=nums.size();

        int m1=0,c1=0;
        int m2=0,c2=0;

        for(int i=0;i<n;i++){
            if(m1==nums[i]) c1++;
            else if(m2==nums[i]) c2++;

            else if(c1==0){
                c1=1;
                m1=nums[i];
            }
            else if(c2==0){
                c2=1;
                m2=nums[i];
            }

            else {
                c1--;
                c2--;
            }

        }
        int cc1=0,cc2=0;
        for(int i=0;i<n;i++){
            if(m1==nums[i]) cc1++;
            else if(m2==nums[i]) cc2++;
        }

        if(cc1>(n/3)) ans.push_back(m1);
        if(cc2>(n/3)) ans.push_back(m2);

        return ans;

        
    }
};