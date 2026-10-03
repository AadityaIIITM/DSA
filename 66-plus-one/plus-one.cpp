class Solution {
public:
    
   
    
    bool all_nine(vector<int>vec){
        int n=vec.size();
        for(int i=0;i<n;i++){
            if(vec[i]!=9){
                return false;
            }
        }
        return true;
    }
    vector<int> plusOne(vector<int>& digits) {
        if(all_nine(digits)==true){
            vector<int>ans(digits.size()+1,0);
            ans[0]=1;
            return ans;
        }
        int z=0;
        for(int i=0;i<digits.size();i++){
            if(digits[digits.size()-1]<9){
                z=z+1;
                digits[digits.size()-1]=digits[digits.size()-1]+1;
                break;
                
            }
            
            
        }
        if(z==1){
            return digits;
        }
        if(z!=1){
           for(int i=digits.size()-1;digits[i]=9;i--){
            digits[i]=0;
            if(digits[i-1]+1<=9){
                digits[i-1]=digits[i-1]+1;
                return digits;

            }
            if(digits[i-1]+1>9){
                continue;
            }
           }
        }
        return digits;

        
            
        
        
        
        
        
    }
};