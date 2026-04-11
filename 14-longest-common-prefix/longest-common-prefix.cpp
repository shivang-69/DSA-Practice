class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n=strs.size();

        string a=strs[0];

        for(int i=1;i<n;i++){

            while(strs[i].find(a)!=0) a.pop_back();

            if(a.size()==0) return "";

            }

            return a;
        
        
    }
};