class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        vector<int>vec;
        for(int i=0;i<10000;i++){
            vec.push_back(i+1);
        }
        
        for(int i=0;i<arr.size();i++){
            for(int j=0;j<vec.size();j++){
                if(vec[j]==arr[i]){
                    vec.erase(vec.begin()+j);
                    
                    
                }
            }
        }
       
        return vec[k-1];

        
    }
};