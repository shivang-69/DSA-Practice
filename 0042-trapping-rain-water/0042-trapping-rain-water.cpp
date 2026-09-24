class Solution {
public:
  vector<int>getl(vector<int>&height,vector<int>&l){

    
    int n=height.size();
    
     
     l[0]=height[0];
     for(int i=1;i<height.size();i++) l[i]=max(l[i-1],height[i]);

     return l;
  }



  vector<int>getr(vector<int>&height,vector<int>&r){
    int n=height.size();

    r[n-1]=height[n-1];


    for(int i=n-2;i>=0;i--) r[i]=max(r[i+1],height[i]);

    return r;


  }
    int trap(vector<int>& height) {

        int n=height.size();

        vector<int>l(n,0);
        vector<int>r(n,0);
       


       getl(height,l);
       getr(height,r);
       
        int sum=0;
      

        for(int i=0;i<n;i++){

           
           
         

           sum+=min(l[i],r[i])-height[i];

             
        }

        return sum;
        
    }
};