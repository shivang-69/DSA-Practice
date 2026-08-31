class Solution {
public:
    bool checkInclusion(string s1, string s2) {

        int m=s1.size();
        int n=s2.size();

        unordered_map<char,int>mp1;
        unordered_map<char,int>mp2;

        for(int i=0;i<m;i++) mp1[s1[i]]++;
       
        int i=0;
        int j=0;

        while(j<n){
            mp2[s2[j]]++;

            while(j-i+1>m){
                mp2[s2[i]]--;

                if (mp2[s2[i]] == 0) {
                 mp2.erase(s2[i]);
            }
            
                i++;
            }

            if(mp1==mp2) return true;
            j++;
        }

        return false;
        
    }
};