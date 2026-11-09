class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int ans=arr1.size();
        for(int j=0;j<arr1.size();j++){
            for(int i=0;i<arr2.size();i++){
                int x=arr1[j]-arr2[i];
                if(x<0){
                    x=-x;
                }
                if(x<=d){
                   ans--;
                   break;
                }
            }
           
        }
        return ans;
    }
};