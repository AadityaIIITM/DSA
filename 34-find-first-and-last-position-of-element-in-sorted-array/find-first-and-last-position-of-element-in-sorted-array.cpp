class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int st=0;
        int mid;
        vector<int>vec={};
        vector<int>ans={-1,-1};
        int end=nums.size()-1;
        //left search
        while(st<=end){
            
            mid=st+(end-st)/2;
            if(nums[mid]==target){
                vec.push_back(mid);
                end=mid-1;
            }
            
            if(nums[mid]>target){
                end=mid-1;
               
            }
            if(nums[mid]<target){
                st=mid+1;
                
            }
           
        }
         //right search
         st=0;
         end=nums.size()-1;
        while(st<=end){
            
            mid=st+(end-st)/2;
            if(nums[mid]==target){
                vec.push_back(mid);
                st=mid+1;
            }
            
            if(nums[mid]>target){
                end=mid-1;
               
            }
            if(nums[mid]<target){
                st=mid+1;
                
            }
           
        }
       
        sort(vec.begin(),vec.end());
        if(vec.size()==0){
            return ans;
        }
        ans[0]=vec[0];
        ans[1]=vec[vec.size()-1];
        return ans;
        
    }
};