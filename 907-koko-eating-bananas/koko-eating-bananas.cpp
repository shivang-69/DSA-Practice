class Solution {
public:


    int eat(vector<int>&piles,int mid,int h){

        int realeat=0;

        int n=piles.size();
        for(int i=0;i<n;i++){
            realeat+=piles[i]/mid;

            if(piles[i]%mid!=0) realeat++;


        }
        return realeat<=h;
    }
    int minEatingSpeed(vector<int>& piles, int h) {

        int n=piles.size();

        int l=1;
        int r=*max_element(piles.begin(),piles.end());

        while(l<r){
            int mid=l+(r-l)/2;

            if(eat(piles,mid,h)) r=mid;
            else l=mid+1;

            
        }

        return l;
        
    }
};