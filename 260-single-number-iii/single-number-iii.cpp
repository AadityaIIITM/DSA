class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        vector<int>ans={};
        if(n==2){
            if(nums[0]!=nums[1]){
                ans.push_back(nums[0]);
                ans.push_back(nums[1]);
                return ans;
            }
        }
        for(int i=1;i<n;i++){
            if(i!=n-1&&nums[i]!=nums[i-1]&&nums[i]!=nums[i+1]){
                ans.push_back(nums[i]);
            }
            
        }
        if(nums[n-1]!=nums[n-2]){
                ans.push_back(nums[n-1]);
            }
        if(nums[0]!=nums[1]){
            ans.push_back(nums[0]);
        }
        return ans;

        
        
    }
};