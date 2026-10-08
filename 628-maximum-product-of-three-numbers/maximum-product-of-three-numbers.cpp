

class Solution {
public:
    int maximumProduct(std::vector<int>& nums) {
        std::sort(nums.begin(), nums.end());
        int n = nums.size();
        
        // Option A: 3 largest numbers
        int optionA = nums[n - 1] * nums[n - 2] * nums[n - 3];
        // Option B: 2 most negative numbers * largest positive number
        int optionB = nums[0] * nums[1] * nums[n - 1];
        
        return max(optionA, optionB);
    }
};