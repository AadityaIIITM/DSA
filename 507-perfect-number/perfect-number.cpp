class Solution {
public:
    bool checkPerfectNumber(int num) {
        int y=1;
        int ans=0;
        while(y<num){
            if(num%y==0){
                ans=ans+y;
            }
            y++;
        }
        if(ans==num){
            return true;
        }
        return false;
    }
};