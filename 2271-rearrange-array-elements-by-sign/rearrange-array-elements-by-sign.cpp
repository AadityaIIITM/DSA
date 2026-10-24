class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>ans;
        vector<int>pos;
        vector<int>neg;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0){
                pos.push_back(i);
                
            }
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]<0){
                neg.push_back(i);
                
            }
        }
        int x=0;
        while(x!=nums.size()/2){
            ans.push_back(nums[pos[x]]);
            ans.push_back(nums[neg[x]]);
            x++;
        }
        return ans;
        
       

        
    }
};