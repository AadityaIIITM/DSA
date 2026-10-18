class Solution {
public:
    bool search(vector<int>& nums, int target) {
         int start=0;
       
        vector<int>vec={};
        vec.push_back(nums[0]);
        for(int i=1;i<nums.size()&&nums.size()>1;i++){
            if(nums[i]!=nums[i-1]){
                vec.push_back(nums[i]);
            }
        }
         int end=vec.size()-1;
         if(nums.size()==1&&nums[0]!=target){//edge case
            return false;
         }
        if(nums.size()==1&&nums[0]==target){//edge case
            return true;
         }

        

        while(start<=end){
            int mid=start+(end-start)/2;
            if(vec[mid]==target){
                return true;
            }
            if(vec[start]==target){return true;}//edge cases
            
            //left sorted
            if(vec[start]<=vec[mid]){
                
                if(target>=vec[start]&&target<=vec[mid]){
                    end=mid-1;
                }
                else{
                    start=mid+1;
                }
            }
            //right sorted
            else{
                if(target>=vec[mid]&&target<=vec[end]){
                    start=mid+1;
                }
                else{
                    end=mid-1;
                }
            }
        }
        
        return false;
            

                    
        
    }
};