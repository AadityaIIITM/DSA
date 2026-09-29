class Solution {
public:
    int addDigits(int num) {
        int sum=0;

        while(num>0){
            int rem=num%10;
            num=num/10;
            sum=sum+rem;
        }
        if(sum>=10){
            num=sum;
            return addDigits(num);

        }
        return sum;
    }
};