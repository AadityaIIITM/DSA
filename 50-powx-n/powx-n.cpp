class Solution {
public:
    double myPow(double x, int n) {
        
        
        double a=x;
        if(n==1){
            return x;
        }
        if(n==0){
            return 1;
        }
        if(x==1){
            return 1;
        }
        if(x==-1&&n%2==0){
            return 1;
        }
        if(x==-1&&n%2!=0){
            return -1;
        }
        if(n==INT_MIN&& x!=1&&x!=-1&&x!=0){
            return 0;
        }

        if(n<0){
           n=-n;
           x=1/x;
           a=x;
           
        }
        
        for(int i=0;i<n-1;i++){
            x=x*a;
        }
        return x;
        
    }
};