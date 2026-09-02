class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int ans=0;
        int final_ans=INT_MIN;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]==1){
                ans=ans+1;
                final_ans=max(final_ans,ans);
            }
            else{
                ans=0;
            }
        }
        final_ans=max(final_ans,ans);
        return final_ans;
    }
};