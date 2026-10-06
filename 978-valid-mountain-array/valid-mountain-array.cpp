class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        int max_ele=INT_MIN;
        int idx=0;
        if(arr.size()<3){
            return false;
        }
       
       
        for(int i=0;i<arr.size();i++){
            if(arr[i]>max_ele){
                max_ele=arr[i];
                idx=i;
            }

        }
        if(idx==arr.size()-1){
            return false;
        }
         if(idx==0){
            return false;
        }
        for(int i=idx+1;i<arr.size();i++){
            if(arr[i-1]<=arr[i]){
                return false;
            }
        }
        
        for(int i=idx-2;i>=0;i--){
            if(arr[i]>=arr[i+1]){
                return false;
            }
        }
        return true;
        
    }
};