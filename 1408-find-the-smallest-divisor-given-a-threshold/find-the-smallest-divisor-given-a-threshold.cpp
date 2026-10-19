class Solution {
public:
    int smallestDivisor(vector<int>& piles, int h) {
         int st=1;
        int end=INT_MIN;
        double x;
        int ans=0;
        int q;

        if(piles.size()==1&&piles[0]>h){
            if(double(double(piles[0])/h)>int(piles[0])/h){
                return (piles[0]/h)+1;
            }
            return piles[0]/h;
        }
        if(piles.size()==1&&piles[0]<h){
            return 1;
        }
        
        for(int i=0;i<piles.size();i++){
            if(end<piles[i]){
                end=piles[i];
            }
        }
        
        
        while(st<=end){
            int times=0;
            int mid=st+(end-st)/2;
            
            for(int i=0;i<piles.size();i++){
               if(mid==0){
                return q;
               }
                x=piles[i]/mid;
                if(double(double(piles[i])/mid)>int(piles[i]/mid)){
                    x=int(piles[i]/mid)+1;
                }
                times=times+x;
            }
            
            if(times<=h){
                ans=mid;
                end=mid-1;
                
            }
           
            if(times>h){
                st=mid+1;
            }
            q=mid;
            
            
        }
        return ans;
    }
};