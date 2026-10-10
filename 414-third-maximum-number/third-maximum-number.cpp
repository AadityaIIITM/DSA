class Solution {
public:
    int thirdMax(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        if(nums.size()==1){
            return nums[0];
        }
        if(nums.size()==2){
            return nums[1];
        }
        if(nums.size()==3&&nums[0]==nums[1]){
            return nums[2];
        }
        if(nums.size()==3&&nums[1]==nums[2]){
            return nums[2];
        }
        if(nums.size()==3){
            return nums[0];
        }
        int n=nums.size();
        int ans=0;
        int c=3;
        
        for(int i=n-1;i>-1&&c>0;i--){
            
            if(i>0&&nums[i]==nums[i-1]){
                continue;
            }
            ans=nums[i];
            
            c--;

        }
        int q=2;

        int y=INT_MAX;
        if(c>0){
            for(int i=n-1;i>-1;i--){
                if(q>0&&nums[i]!=nums[q-1]){
                    y=min(y,nums[i]);
                    q=q-1;
                }
                if(q>0&&i==0){
                    return nums[n-1];
                }
            }
            return y;
        }
        return ans;

        
    }
};