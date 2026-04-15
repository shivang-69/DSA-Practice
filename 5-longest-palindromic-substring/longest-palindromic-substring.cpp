class Solution {
public:

    bool solve(string &s,int i ,int j){
        if(i>=j) return true;

        if(s[i]==s[j])  return solve(s,i+1,j-1);

        return false;

    }
    string longestPalindrome(string s) {

        

        int maxl=INT_MIN;
        int st=0;

        for(int i=0;i<s.size();i++){
            for(int j=i;j<s.size();j++){
                if(solve(s,i,j)){
                    if(j-i+1>maxl){
                        maxl=j-i+1;
                        st=i;

                    }

                }
            }
        }

        return s.substr(st,maxl);
        
    }
};