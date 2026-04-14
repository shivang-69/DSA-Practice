class Solution {
public:
    int beautySum(string s) {

        int sum=0;

        for(int i=0;i<s.size();i++){
            vector<int>v(26,0);

            for(int j=i;j<s.size();j++){
                v[s[j]-'a']++;

                int maxf=0;
                int minf=INT_MAX;

                for(int k=0;k<26;k++){
                    if(v[k]>0){
                        maxf=max(maxf,v[k]);
                        minf=min(minf,v[k]);
                    }
                }

                sum+=(maxf-minf);



            }
        }

        return sum;
        
    }
};