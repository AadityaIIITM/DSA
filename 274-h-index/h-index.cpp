class Solution {
public:
    int hIndex(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int final_answer=0;
        if(nums.size()==1&&nums[0]==0){
            return 0;
        }
        if(nums.size()==1){
            return 1;
        }
        for(int i=0;i<nums.size()+1;i++){
            int answer=0;
            for(int j=0;j<nums.size();j++){
                if(nums[j]>=i){
                    answer++;
                }
            }
            if(answer>=i){
                final_answer=i;
            }
        }
        return final_answer;
    }
};