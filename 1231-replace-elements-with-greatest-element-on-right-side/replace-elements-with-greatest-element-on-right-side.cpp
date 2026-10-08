class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        vector<int>ans={};
        if(arr.size()==1){
            ans.push_back(-1);
            return ans;
        }
        for(int i=0;i<arr.size();i++){
            int input=-1;
            if(i==arr.size()-1){
                ans.push_back(-1);
                break;
            }
            for(int m=i+1;m<arr.size();m++){
                
                input=max(input,arr[m]);
                
            }
            ans.push_back(input);
        }
        return ans;
        
    }
};