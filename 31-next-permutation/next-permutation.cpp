class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n=nums.size();
        int pivot=-1;
        // finding pivot element
        for(int i=n-2;i>=0;i--){
            if(nums[i]<nums[i+1]){
                pivot=i;
                break;

            }
            
        }
        if(pivot==-1){
            reverse(nums.begin(), nums.end());
            return;
        }
        //swaping pivot and RME
        for(int i=n-1;i>pivot;i--){
            if(nums[i]>nums[pivot]){
                swap(nums[i],nums[pivot]);
                break;
            }
            
        }
        // swaping remaing element
        int j=pivot+1;
        int m=n-1;
        while(m>=j){
            swap(nums[j],nums[m]);
            j++;
            m--;
        }
        
        
        
    }
};