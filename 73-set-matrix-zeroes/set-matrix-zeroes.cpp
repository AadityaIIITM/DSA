class Solution {
public:
    void matrix_to_set_zero(vector<vector<int>>&matrix,vector<vector<int>>&ans){
            int row=0;
            int col=0;
            for(int i=0;i<ans.size();i++){
                int vec_row=ans[i][0];
                int vec_col=ans[i][1];
                for(int a=0;a<matrix.size();a++){
                    matrix[a][vec_col]=0;
                }
                for(int a=0;a<matrix[0].size();a++){
                    matrix[vec_row][a]=0;
                }
                
               
                

            }
    }
    void finding_zero(vector<vector<int>>&matrix,vector<int>&vec,vector<vector<int>>&ans){
        int row=matrix.size();
        int col=matrix[0].size();
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(matrix[i][j]==0){
                    
                    ans.push_back({i,j});
                   
                }
            }
        }
    }

  
    void setZeroes(vector<vector<int>>& matrix) {
        vector<int>vec;
        vector<vector<int>>ans;
        finding_zero(matrix,vec,ans);
        matrix_to_set_zero(matrix,ans);
        
    }
};