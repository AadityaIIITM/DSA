class Solution {
public:
    int semiOrderedPermutation(vector<int>& nums) {
        int n=nums.size();
        int operation1=0;
        if(nums[0]==1&&nums[nums.size()-1]==nums.size()){
            return 0;
        }
        for(int i=nums.size()-1;i>0&&nums[0]!=1;i--){
            if(nums[i]==1){
                swap(nums[i-1],nums[i]);
                operation1= operation1+1;
            }
        }
        int operation2=0;
        for(int i=0;i<nums.size()-1&&nums[nums.size()-1]!=nums.size();i++){
            if(nums[i]==nums.size()){
                swap(nums[i],nums[i+1]);
                operation2= operation2+1;
            }
        }
        return operation1+operation2;
        
    }
};