class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        int c=1;
        int n=nums.size();
        int a=0;
        int m=k;
        while(a<n){
            for(int i=0;i<n;i++){

                if(m==nums[i]){
                
                c=c+1;
                m=k*c;
                }
            }
            a++;
        }
        return k*c;
            
            
        
        
    }
};