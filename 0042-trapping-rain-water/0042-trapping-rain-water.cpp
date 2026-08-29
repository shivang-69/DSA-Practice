class Solution {
public:


vector<int>getleft(vector<int>& height,vector<int>&left){

    int n=height.size();

    left[0]=height[0];

    for(int i=1;i<n;i++){
        left[i]=max(left[i-1],height[i]);
    }

    return left;
}


vector<int>getr(vector<int>& height,vector<int>&r){

    int n=height.size();
    r[n-1]=height[n-1];

    for(int i=n-2;i>=0;i--) r[i]=max(r[i+1],height[i]);

    return r;


}
    int trap(vector<int>& height) {

        int n=height.size();
        vector<int>left(n,0);
        vector<int>r(n,0);

        int sum=0;

         getleft(height,left);
         getr(height,r);


        for(int i=0;i<n;i++){
           
            sum+=(min(left[i],r[i])-height[i]);


        }

        return sum;
        
    }
};