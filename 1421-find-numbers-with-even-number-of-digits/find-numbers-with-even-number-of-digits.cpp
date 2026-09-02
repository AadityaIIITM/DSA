class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int a=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            int ans=0;
            int rem=0;
            
            while(nums[i]>0){
                rem=nums[i]%10;
                ans++;
                nums[i]=nums[i]/10;
            }
            if(ans%2==0){
                a=a+1;
            }
            else{
                ans=0;
                rem=0;
                
            }
        }
        return a;


        
    }
};