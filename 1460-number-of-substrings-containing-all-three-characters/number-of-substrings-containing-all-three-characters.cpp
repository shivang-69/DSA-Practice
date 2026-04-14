class Solution {
public:
    int numberOfSubstrings(string s) {

        int result=0;

        vector<int>v(3,0);

        int i=0;
        int j=0;

        while(j<s.size()){

            v[s[j]-'a']++;

            while(v[0]>0 && v[1]>0 && v[2]>0){
                result+=(s.size()-j);
                v[s[i]-'a']--;
                i++;
            }

            j++;


        }

        return result;
        
    }
};