class Solution {
public:
    bool issafe(vector<string>& board , int row , int col , int n){
        for(int i=0;i<n;i++){//horizontal
           if(board[row][i]=='Q'){
            return false;
           }
        }
        //vertical
        for(int i=0;i<n;i++){
            if(board[i][col]=='Q'){
                return false;
            }
        }
        //left diagonal
        for(int i=row , j =col; i>=0 && j>=0;i-- , j--){
            if(board[i][j]=='Q'){
                return false;
            }

        }
        //right diagonal
        for(int i=row, j = col ; i>=0 && j<n;i-- , j++){
            if(board[i][j]=='Q'){
                return false;
            }
        }
        return true;


    }
    
    void Nqueen(vector<string>& board , vector<vector<string>>& ans , int row , int n){
        //base case
        if(row==n){
            ans.push_back({board});
            return ;
        }


        for(int j=0;j<n;j++){
            if(issafe(board , row , j, n)){
                board[row][j]='Q';
                Nqueen(board , ans , row+1 , n);
                //backtrack
                board[row][j]='.';

            }
        }
    }

    vector<vector<string>> solveNQueens(int n) {
        vector<string> board(n , string(n, '.'));
        vector<vector<string>> ans;
        Nqueen(board , ans , 0 , n);
        return ans;
    }
};