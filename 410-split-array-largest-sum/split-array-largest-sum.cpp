class Solution {
public:

    bool is_valid(vector<int> nums,int n,int m,int max){
            n=nums.size();
            int pages=0;
            int stu=1;
            for(int i=0;i<n;i++){
                if(nums[i]>max){
                    return false;
                }
            
                if(pages+nums[i]<=max){
                    pages=pages+nums[i];
                }
                else{
                    stu++;
                    pages=nums[i];
                }
            }
            if(stu>m){
                return false;
            }
            if(stu<=m){
                return true;
            }
            return 0;
        }

    int allocate_books(vector<int>nums,int n,int m){
            if(m>n){
                return -1;
            }
            int sum=0;
            for(int i=0;i<n;i++){
                sum=sum+nums[i];
            }
            int ans=-1;
            int st=0;
            int end=sum;
            while(st<=end){
                int mid=st+(end-st)/2;
                if(is_valid(nums,n,m,mid)){
                    ans=mid;
                    end=mid-1;
                }
                else{
                    st=mid+1;
                }
            }
            return ans;
    };

    int splitArray(vector<int>& nums, int k) {
        
        
        
        int n=nums.size();
        return allocate_books(nums,n,k);
    
          
       


        
    }
};