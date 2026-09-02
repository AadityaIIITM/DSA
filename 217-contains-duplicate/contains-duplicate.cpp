class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int q=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(q==nums.size()-1){
                return false;
            }
            if(nums[q]==nums[q+1]){
                return true;
            }
            
            else{
                q++;
            }
        }
        return 0;

        
    }
};