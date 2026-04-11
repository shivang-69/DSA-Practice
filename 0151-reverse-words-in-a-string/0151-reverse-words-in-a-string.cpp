class Solution {
public:
    string reverseWords(string s) {
        int n=s.size();

        reverse(s.begin(),s.end());


        int i=0;
        int p=0,q=0;

        while(i<n){
            
            while(i<n && s[i]!=' '){
                s[q++]=s[i++];
            }

            s[q]=' ';

            if(p<q){
                reverse(s.begin()+p,s.begin()+q);
                q++;
                p=q;
            }
            i++;
        }

        return s.substr(0,q-1);


        
    }
};