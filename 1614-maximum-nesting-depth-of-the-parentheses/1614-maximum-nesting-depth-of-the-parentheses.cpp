class Solution {
public:
    int maxDepth(string s) {
        int mx=0;
        int maxc=0;

        for(int i=0;i<s.size();i++){
            
            if(s[i]=='(') mx++;
            else if(s[i]==')') mx--;

            maxc=max(maxc,mx);
        }
        

        return maxc;
        
    }
};