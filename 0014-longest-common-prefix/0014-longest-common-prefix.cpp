class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {

        if(strs.size()==0) return "";

        sort(strs.begin(),strs.end());

        string s=strs.front();
        string e=strs.back();
        
        int i=0;
        while(i<s.size() && s[i]==e[i]) i++;
         
         return s.substr(0,i);

        
    }
};