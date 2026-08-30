class Solution {
public:
    int characterReplacement(string s, int k) {
        
        int n=s.size();
        int i=0;
        int j=0;
        int maxf=0;
        int maxl=0;

        unordered_map<char,int>mp;


        while(j<n){

            mp[s[j]]++;



            maxf=max(maxf,mp[s[j]]);

            if((j-i+1)-maxf>k){
                mp[s[i]]--;
                i++;
            }

            maxl=max(maxl,j-i+1);
            j++;





        }

        return maxl;


    }
};