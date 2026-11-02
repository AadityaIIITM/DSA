class Solution {
public:
    bool is_safe(vector<vector<char>>&board,int  row,int col,char dig){
        //horizontal
        for(int j=0;j<9;j++){
            if(board[row][j]==dig){
                return false;
            }
        }
        //vertical
        for(int i=0;i<9;i++){
            if(board[i][col]==dig){
                return false;
            }
        }
        //grid
        int srow=(row/3)*3;
        int scol=(col/3)*3;
        for(int i=srow;i<=srow+2;i++){
            for(int j=scol;j<=scol+2;j++){
                if(board[i][j]==dig){
                    return false;
                }
            }
        }
        return true;
    }
    bool helper(vector<vector<char>>&board,int row,int col){
        if(row==9){
            return true;
        }
        int next_row=row;
        int next_col=col+1;
        if(next_col==9){
            next_row=row+1;
            next_col=0;
        }
        if(board[row][col]!='.'){
            return helper(board,next_row,next_col);
        }
        //placing digit
        for(char dig='1';dig<='9';dig++){
            if(is_safe(board,row,col,dig)){
                board[row][col]=dig;
                if(helper(board,next_row,next_col)){
                    return true;
                }
                board[row][col]='.';
            }
           
        }
        return false;
    }
    void solveSudoku(vector<vector<char>>& board) {
        helper(board,0,0);
        
        
    }
};