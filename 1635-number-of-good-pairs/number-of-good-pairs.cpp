class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int ans=0;
        for(int i=0;i<nums.size();i++){
            for(int m=i+1;m<nums.size();m++){
                if(nums[i]==nums[m]&&i<m){
                    ans++;
                }
            }
        }
        return ans;
        
    }
};