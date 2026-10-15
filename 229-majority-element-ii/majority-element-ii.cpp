class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int freq=1;
        vector<int>vec={};
        
        for(int i=1;i<nums.size();i++){
            if(nums[i]!=nums[i-1]){
                freq=1;
            }
            if(nums[i]==nums[i-1]){
                freq++;
            }
            if(freq>nums.size()/3){
                vec.push_back(nums[i]);
                
            }
            
        }
        if(nums.size()==1){
            return nums;
        }
        if(nums.size()==2&&nums[0]!=nums[1]){
            return nums;
        }
        if(nums.size()==2&&nums[0]==nums[1]){
            vector<int>ans;
            ans.push_back(nums[0]);
            return ans;
        }
        vector<int>fin={};
        if(vec.size()>0){
            fin.push_back(vec[0]);
        }
        for(int i=1;i<vec.size();i++){
            if(vec[i]!=vec[i-1]){
                fin.push_back(vec[i]);
            }
        }

        return fin;
        
    }
};