class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int freq=1;
        int ans=0;
        sort(nums.begin(),nums.end());
        if(nums.size()==0){
            return 0;
        }
        if(nums.size()==1){
            return 1;
        }
        for(int i=1;i<nums.size();i++){
            if(nums[i]-nums[i-1]==1){
                freq++;
                ans=max(ans,freq);
            }
            if(nums[i]-nums[i-1]>1){
                freq=1;
            }
        }
        if(ans==0){
            return freq;
        }
        

        
        return ans;
        
    }
};