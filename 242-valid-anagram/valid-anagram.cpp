class Solution {
public:
    bool isAnagram(string s, string t) {

        unordered_map<char,int>mp;
        int n=s.size();

        if(s.size()!=t.size()) return false;

        for(int i=0;i<n;i++) mp[s[i]]++;

        for(int i=0;i<n;i++){
            if(mp.find(t[i])==mp.end() || mp[t[i]]==0) return false;
            else mp[t[i]]--;
           

        }

            return true; 


        }
        
    
};