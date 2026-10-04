class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int>ans={};
        
        for(int i=0;i<nums.size()&&nums.size()!=1;i++){
            ans.push_back(nums[i]);
        }
        if(nums.size()!=1){
            nums.erase(nums.begin(),nums.end());
        }
        for(int i=1;i<ans.size();i++){
            if(i==1){
                nums.push_back(ans[0]);
            }
            if(ans[i]!=ans[i-1]){
                nums.push_back(ans[i]);
            }

        }
        int z=nums.size();
        return z;
    }
};