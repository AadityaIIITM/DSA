class Solution {
public:
    bool isPowerOfTwo(int n) {
         if(n==1){
            return true;
        }
        if(n==2){
            return true;
        }

        int i=2;
        while(i<n){
            i=i*2;
            if(n%i!=0){
                return false;
            }
        }
        if(n==i){
            return true;
        }
        return 0;
    }
    
    
};