class Solution {
public:
    int smallestNumber(int n, int t) {
        int ans=1;
        int a=n;
        
        while(ans%t!=0){
            ans=1;
            while(a>0){
                int rem=a%10;
                ans=ans*rem;
                a=a/10;
                
            }
            if(ans%t==0){
            return n;
            }
            else{
                n=n+1;
                a=n;
            }
        }
        if(t==1){
            return n;
        }
        return 1;
       

            

    
        
        
    }
};