class Solution {
public:
    string frequencySort(string s) {
        
        string ans="";

        unordered_map<char,int>mp;

        for(int i=0;i<s.size();i++) mp[s[i]]++;

        vector<pair<char,int>>v(mp.begin(),mp.end());

        sort(v.begin(),v.end(),[](pair<char,int >&a,pair<char ,int >&b){
           return a.second > b.second;
        });

        for(auto &a : v) ans.append(a.second,a.first);

        return ans;
        
    }
};