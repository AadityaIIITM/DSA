class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        int st=0;
        vector<int>ans={};
        while(n<nums.size()){
            ans.push_back(nums[st]);
            ans.push_back(nums[n]);
            st++;
            n++;
        }
        return ans;
        
    }
};