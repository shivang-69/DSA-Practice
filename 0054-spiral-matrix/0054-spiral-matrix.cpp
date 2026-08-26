class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        
        vector<int>ans;
           int m=matrix.size();
           int n=matrix[0].size();


           int top=0;
           int bottom=m-1;

           int l=0;
           int r=n-1;


           int id=0;


    while(l<=r && top<=bottom ){

        if(id==0){
            for(int i=l;i<=r;i++)  ans.push_back(matrix[top][i]);
             top++;
        }

         if(id==1){

             for(int i=top;i<=bottom;i++)  ans.push_back(matrix[i][r]);

             r--;
         }
          if(id==2){
             for(int i=r;i>=l;i--) ans.push_back(matrix[bottom][i]);

             bottom--;
          }

          if(id==3){

             for(int i=bottom;i>=top;i--) ans.push_back(matrix[i][l]);
             l++;
          }


          id=(id+1)%4;
    }

        return ans;
    } 

        
    
};