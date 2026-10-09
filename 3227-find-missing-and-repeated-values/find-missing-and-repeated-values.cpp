class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        
        vector<int>ans;
        unordered_set<int>s;
        int n=grid.size();
        int a;
        int b;
        int es=0;
        int as=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                as=as+grid[i][j];
                if(s.find(grid[i][j])!=s.end()){
                    a=grid[i][j];
                    ans.push_back(a);
                }
                s.insert(grid[i][j]);
            }
        }
        es=((n*n)*((n*n)+1))/2;
        b=es+a-as;
        ans.push_back(b);
        return ans;
    }
};