class Solution {
public:
    set<vector<int>>s;
    void combsum(vector<int>&arr,int i,vector<int>&comb,vector<vector<int>>&ans,int tar,int n){
        if(i==n||tar<0){
            return;
        }
        if(tar==0){
            if(s.find(comb)==s.end()){
                ans.push_back(comb);
                s.insert(comb);
            }
            return;
        }
        comb.push_back(arr[i]);
        combsum(arr,i+1,comb,ans,tar-arr[i],n);
        combsum(arr,i,comb,ans,tar-arr[i],n);
        comb.pop_back();
        combsum(arr,i+1,comb,ans,tar,n);

    }
    vector<vector<int>> combinationSum(vector<int>& arr, int tar) {
        vector<int>comb;
        vector<vector<int>>ans;
        int n=arr.size();
        combsum(arr,0,comb,ans,tar,n);
        return ans;
        
    }
};