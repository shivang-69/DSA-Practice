class Solution {
public:



    int cal(int &a,int &b,string s){
        if(s=="+") return a+b;
        else if(s=="-") return a-b;
        else if(s=="*") return a*b;
        else return a/b;
    }


    int evalRPN(vector<string>& tokens) {
        stack<int>st;

        int result=0;

        for(int i=0;i<tokens.size();i++){
            if(tokens[i]=="+" || tokens[i]=="-" || tokens[i]=="*" || tokens[i]=="/"){
                int a=st.top();
                st.pop();
                int b=st.top();
                st.pop();

                result=cal(b,a,tokens[i]);
                st.push(result);

            }
            else st.push(stoi(tokens[i]));
            
            
        }

        return st.top();
        
    }
};