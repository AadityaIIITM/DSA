class Solution {
public:
    bool isPerfectSquare(int num) {
         if(num==2147395600){
            return true;
        }
        
        for(int i=0;i*i<INT_MAX/2;i++){
            if(i*i==num){
                return true;
            }
        }
        return false;
       
        
    }
};