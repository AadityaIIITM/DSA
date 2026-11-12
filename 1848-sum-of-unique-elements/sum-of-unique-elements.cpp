class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int ans=0;
        sort(nums.begin(),nums.end());
        if(nums.size()==1){
            return nums[0];
        }
        if(nums.size()>=2&&nums[0]!=nums[1]){
            ans=ans+nums[0];
        }
        if(nums.size()>=2&&nums[nums.size()-1]!=nums[nums.size()-2]){
            ans=ans+nums[nums.size()-1];
        }
        for(int i=1;i<nums.size()-1;i++){
            if(nums[i]!=nums[i+1]&&nums[i]!=nums[i-1]){
                ans=ans+nums[i];
            }

        }
        return ans;
        
    }
};