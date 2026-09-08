class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>ans={};
        int n=nums.size();
        for(int i=0;i<n;i++){
            
            for(int m=0;m<i;m++){
                if(nums[i]+nums[m]==target){
                    ans.push_back(i);
                    ans.push_back(m);
                }
            }
        }
        return ans;
        
    }
};