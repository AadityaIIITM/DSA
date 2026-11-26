class Solution {
public:
 int x=0;
    bool canAliceWin(int n) {
       
            for(int i=10;i>=0&&n>=0;i--){
                n=n-i;
                if(i%2==0&&n<0){
                    return false;
                    
                }
               
            }
        
        return true;
    }
};