class Solution {
public:
    bool issafe(vector<vector<char>>& board , int row , int col , char dig){
        //horizontal
        for(int i=0; i<9;i++){
            if(board[row][i]==dig){
                return false;
            }
        }
        //vertical check
        for(int i=0;i<9;i++){
            if(board[i][col]==dig){
                return false;
            }
        }
        //whole grid check
        int sr=(row/3)*3;
        int sc=(col/3)*3;
        for(int i=0;i<3;i++){
            for(int j = 0; j<3;j++){
                if(board[sr+i][sc+j]==dig){
                    return false;
                }
            }
        }


        return true;
    }

   bool helper(vector<vector<char>>& board , int row , int col ){
    //base case
    if(row==9){
        return true;
    }
    int nr=row , nc= col+1;
    if(nc==9){
        nr=row+1 , nc=0;
    }
    if(board[row][col]!='.'){
       return helper(board , nr , nc);
    }
    //placing the digits
    for(char dig='1'; dig<='9' ; dig++){
        if(issafe(board , row , col , dig)){
            board[row][col]=dig;
            if(helper(board , nr , nc)){
                return true;
            }else{
             board[row][col]='.';
            }
        }

    }



    return false;
    
   }



    void solveSudoku(vector<vector<char>>& board) {
        helper(board , 0 , 0);
        
    }
};