class Solution {
public:
    int characterReplacement(string s, int k) {

        int n=s.size();

        int i=0;
        int j=0;

        unordered_map<int,int>mp;

        int maxf=0;
        int maxl=0;

        while(j<n){
            mp[s[j]]++;

            maxf=max(maxf,mp[s[j]]);

            while(((j-i+1)-maxf)>k){
                mp[s[i]]--;
                i++;

            }

            maxl=max(maxl,j-i+1);
            j++;
        }
        return maxl;
    }
};