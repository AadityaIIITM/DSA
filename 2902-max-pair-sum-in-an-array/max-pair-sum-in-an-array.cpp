class Solution {
    private:
    // Helper function to extract the maximum digit
    int getMaxDigit(int num) {
        int maxD = 0;
        while (num > 0) {
            maxD = max(maxD, num % 10);
            num /= 10;
        }
        return maxD;
    }
public:
    int maxSum(vector<int>& nums) {
        int sum=0;
        int ans=INT_MIN;
        int n=nums.size();
        for(int i=0;i<n;i++){
            for(int m=i+1;m<n;m++){
                if(getMaxDigit(nums[i])==getMaxDigit(nums[m])){
                    sum=nums[i]+nums[m];
                    ans=max(sum,ans);
                }
            }
        }
        if(ans==INT_MIN){
            return -1;
        }
        else{
            return ans;
        }
       
          
                        
                

            
          
        
        
        
    }
};