class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int>ans={};

        
        for(int i=0;i<nums.size();i++){
            ans.push_back(nums[i]);
        }
        for(int i=0;i<nums.size();i++){
            nums[i]=0;
        }
        for(int i=0;i<ans.size();i++){
           if(ans[i]!=0){

            nums.push_back(ans[i]);
            nums.erase(nums.begin() + 0);
           }
        }
        int st=0;
        int end=nums.size()-1;
        while(st<=end){
            swap(nums[st],nums[end]);
            st++;
            end--;
        }
        int y=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                end=i-1;
                y=y+1;
                break;
            }
        }
        st=0;
        while(st<=end&&y==1){
            swap(nums[st],nums[end]);
            st++;
            end--;
        }
        bool change =true;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                change=false;
            }

        }
        if(change ==true){
            int s=0;
            int e=nums.size()-1;
            while(s<=e){
                swap(nums[s],nums[e]);
                s++;
                e--;
            }

        }

    }
};