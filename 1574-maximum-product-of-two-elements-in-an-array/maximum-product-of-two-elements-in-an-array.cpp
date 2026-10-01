class Solution {
public:
    int maxProduct(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int x=nums[nums.size()-1]-1;
        int y=nums[nums.size()-2]-1;
        return x*y;
        
    }
};