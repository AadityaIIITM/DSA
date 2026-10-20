

#include <vector>

class Solution {
public:
    std::vector<std::vector<int>> subsets(std::vector<int>& nums) {
        std::vector<std::vector<int>> result;
        std::vector<int> current;
        generateSubsets(0, nums, current, result);
        return result;
    }

private:
    void generateSubsets(int index, const std::vector<int>& nums, std::vector<int>& current, std::vector<std::vector<int>>& result) {
        // Base case: processed all elements
        if (index == nums.size()) {
            result.push_back(current);
            return;
        }

        // Decision 1: Exclude nums[index]
        generateSubsets(index + 1, nums, current, result);

        // Decision 2: Include nums[index]
        current.push_back(nums[index]);
        generateSubsets(index + 1, nums, current, result);
        current.pop_back(); // Backtrack to restore state
    }
};