class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        vector<int>ans;

        unordered_map<int,int>mp;

        for(int i=0;i<nums.size();i++) mp[nums[i]]++;

        for(int i=nums.size();i>=0;i--){

            for(auto it: mp){

                if(i==it.second) ans.push_back(it.first);
                if(ans.size()==k) break;
        }

            if(ans.size()==k) break;
        }


        return ans;



        
        
    }
};