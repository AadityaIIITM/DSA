#include <vector>
#include <string>
#include <queue>

class Solution {
public:
    std::vector<std::string> findRelativeRanks(std::vector<int>& score) {
        int n = score.size();
        
        // Store {score_value, original_index} in a max-heap
        std::priority_queue<std::pair<int, int>> maxHeap;
        for (int i = 0; i < n; i++) {
            maxHeap.push({score[i], i});
        }
        
        std::vector<std::string> result(n);
        int rank = 1;
        
        while (!maxHeap.empty()) {
            int originalIdx = maxHeap.top().second;
            maxHeap.pop();
            
            if (rank == 1) result[originalIdx] = "Gold Medal";
            else if (rank == 2) result[originalIdx] = "Silver Medal";
            else if (rank == 3) result[originalIdx] = "Bronze Medal";
            else result[originalIdx] = std::to_string(rank);
            
            rank++;
        }
        
        return result;
    }
};