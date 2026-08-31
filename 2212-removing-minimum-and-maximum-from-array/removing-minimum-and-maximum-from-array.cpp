class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n=nums.size();
        int f=n;
        int minimum=INT_MAX;
        int ans1;
        int maximum=INT_MIN;
        int ans2;
        int ans3;
        int ans4;
        int final1;
        int final2;
        int super;
        vector<int>num(nums);
        if(n==1){
            return 1;
        }
        for(int i=0;i<n;i++){
            ans1=nums[i];
            minimum=min(ans1,minimum);
            
        }
        for(int i=0;i<n;i++){
            ans2=nums[i];
            maximum=max(ans2,maximum);
        }
        for(int i=0;i<n;i++){
            if(minimum==nums[i]){
                if(i+1<n-i){
                    ans3=i+1;
                    nums.erase(nums.begin() , nums.begin()+i+1);
                }
                else{
                    ans3=n-i;
                    nums.erase(nums.begin() +i, nums.end());
                }
            }
        }
        
        for(int i=0;i<n;i++){
            n=nums.size();
             
            
            if(maximum==nums[i]){
                if(i+1<n-i){
                    ans4=i+1;
                    nums.erase(nums.begin(),nums.begin()+i+1);
                }
                else{
                    ans4=n-i;
                    nums.erase(nums.begin()+i,nums.end());
                    
                }
            }
        }
        final1=ans3+ans4;
        n=num.size();
        for(int i=0;i<n;i++){
            
            
            if(maximum==num[i]){
                if(i+1<n-i){
                    ans4=i+1;
                    num.erase(num.begin(),num.begin()+i+1);
                }
                else{
                    ans4=n-i;
                    num.erase(num.begin()+i,num.end());
                    
                }
            }
        }
         for(int i=0;i<n;i++){
            n=num.size();
            if(minimum==num[i]){
                if(i+1<n-i){
                    ans3=i+1;
                    num.erase(num.begin() , num.begin()+i+1);
                }
                else{
                    ans3=n-i;
                    num.erase(num.begin() +i, num.end());
                }
            }
        }
        final2=ans3+ans4;
        super=min(final1,final2);
        return super;




        

        

    }
};