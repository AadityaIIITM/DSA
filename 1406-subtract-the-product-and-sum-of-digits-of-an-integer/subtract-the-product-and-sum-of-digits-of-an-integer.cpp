class Solution {
public:
    int subtractProductAndSum(int n) {
        int m=n;
        int rem1=0;
        int rem2=0;
        int sum=0;
        int product=1;
        int ans=0;
        while(n>0){
            rem1=n%10;
            sum=sum+rem1;
            n=n/10;
        }
        while(m>0){
            rem2=m%10;
            product=product*rem2;
            m=m/10;
        }
        ans=product-sum;
        return ans;

        
    }
};