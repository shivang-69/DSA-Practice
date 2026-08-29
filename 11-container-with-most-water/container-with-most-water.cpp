class Solution {
public:
    int maxArea(vector<int>& height) {

        int n=height.size();
        int maxw=0;

        int i=0;
        int j=n-1;

        int w=0;
        int minh=0;
        int a=0;

        while(i<j){

             w=j-i;

            minh=min(height[i],height[j]);

            a=minh*w;

            maxw=max(maxw,a);

            if(height[i]<height[j]) i++;
            else j--;

            
        }

        return maxw;


        
    }
};