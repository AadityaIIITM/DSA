class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n==1){
            return true;
        }
        if(n==0){
            return false;
        }
        if(n<0){
            return false;
        }
        int i=3;
        while(i<n){
            if(n%i!=0){
                return false;
            }
            else{
                i=i*3;
            }
        }
        if(n%i==0){
            return true;
        }
        return 0;
        
    }
};