class Solution {
public:
    int findMin(vector<int>& nums) {
        int n=nums.size();
        int st=0;
        int end=n-1;
        if(nums.size()==1){
            return nums[0];
        }
        if(nums.size()==2){
            return min(nums[0],nums[1]);
        }
        while(st<=end){
            int mid=st+(end-st)/2;
            if(st==end){
                return nums[mid];
            }
            if(mid>0&&mid<n-1&&nums[mid]<nums[mid-1]&&nums[mid]<nums[mid+1]){
                return nums[mid];
            }
            //Left Sorted
            if(nums[st]<=nums[mid]){
                //Right Search
                if(nums[st]>nums[end]){
                    st=mid+1;
                }
                //Left Search
                else{
                    end=mid-1;
                }
            }
            //Right Sorted
            else{
                //Right Search
                if(nums[st]>nums[end]){
                    end=mid-1;
                }
                //Left Search
                else{
                    st=mid+1;
                }
            }
        }
        return nums[0];

        
    }
};