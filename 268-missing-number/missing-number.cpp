class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int m=n;
        sort(nums.begin(), nums.end());
        for(int i=0;i<n;i++){
            if(nums[i]!=i){
                return i;
            }
            else{
                m--;
            }

        }
        if(m==0){
            return n;
        }
        return 0;
        
    }
};