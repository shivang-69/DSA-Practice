class Solution {
public:
    string removeOuterParentheses(string s) {
         
         string ans="";

         int cnt=0;
         int st=0;

         for(int i=0;i<s.size();i++){

            if(s[i]=='(') cnt++;
            else cnt--;

            if(cnt==0){
                ans+=s.substr(st+1,i-st-1);

                st=i+1;
            }
         }


         return ans;
        
    }
};