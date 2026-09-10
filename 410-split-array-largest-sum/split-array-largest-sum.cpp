class Solution {
public:
    bool is_valid(vector<int>arr,int n,int k,int max){
        int s=1;
        int pages=0;
        for(int i=0;i<n;i++){
            if(arr[i]>max){
                return false;
            }
            if(pages+arr[i]<=max){
                pages=pages+arr[i];
            }
            else{
                s++;
                pages=arr[i];
            }
        }
        if(s>k){
            return false;
        }
        else{
            return true;
        }
        
    };
    int split(vector<int>arr,int n,int k){
        int ans=-1;
        int sum=0;
        if(n<k){
            return -1;
        }

        for(int i=0;i<n;i++){
            sum=sum+arr[i];

        }
        
        int start=0;
        int end=sum; 
        while(start<=end){
            int mid=start+(end-start)/2;
            if(is_valid(arr,arr.size(),k,mid)){
                ans=mid;
                end=mid-1;
                
            }

            else{
                start=mid+1;
            }
        }
        return ans;
    };



    int splitArray(vector<int>& nums, int k) {
        return split(nums,nums.size(),k);
        
        
    }
};