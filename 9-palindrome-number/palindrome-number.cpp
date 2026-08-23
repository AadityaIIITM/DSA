class Solution {
public:
    bool isPalindrome(int x) {
        int a=x;
        
        int rem=0;
        long long ans=0;
        while(x>0){
            rem=x%10;
            x=x/10;
            ans=ans*10+rem;
        }
        if(ans==a){
            return true;
        }
        else{
            return false;
        }



        
        
    }
};