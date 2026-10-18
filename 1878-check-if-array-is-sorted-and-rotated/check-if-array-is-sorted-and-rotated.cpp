class Solution {
public:
    bool check(vector<int>& nums) {
        vector<int>vec;
        if(nums.size()==1){
            return true;
        }
        for(int i=0;i<nums.size();i++){
            vec.push_back(nums[i]);
        }
        sort(vec.begin(),vec.end());
        int q=0;
        for(int x=0;x<nums.size();x++){
           
            q=0;
            for(int i=0;i<nums.size();i++){
                if(nums[i]==vec[(i+x)%vec.size()]){
                    q++;
                }
                if(q==nums.size()-1){
                    return true;
                }
            }
        }
        return false;
    }
};