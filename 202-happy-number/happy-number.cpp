class Solution {
public:
    int sqdigit(int n){
        int ans=0;
        while(n>0){
            int rem=n%10;
            ans=ans+rem*rem;
            n=n/10;
        }
        return ans;
    }
    bool isHappy(int n) {

        int ans=n;
        if(ans==1||ans==7){
            return true;
        }
       
        
        while(ans-10>=0){
            ans=sqdigit(ans);
             if(ans==1||ans==7){
            return true;
        }
        }
        if(ans==1){
            return true;
        }
        return false;
    }
};