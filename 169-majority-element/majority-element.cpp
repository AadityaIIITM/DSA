class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int freq=1;
        int n=nums.size();
        if(nums.size()==1){
            return nums[0];
        }

        for(int i=1;i<nums.size();i++){
            if(nums[i]==nums[i-1]){
                freq++;
            }
            if(freq>n/2){
                return nums[i];
            }
            if(nums[i]!=nums[i-1]){
                freq=1;
            }
        }
        return 0;
        
    }
};