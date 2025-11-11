class Solution {
public:
    bool isHelper(vector<vector<int>>& grid ,int r, int c , int n , int expval){
     //base case
            if(r<0 || c<0 || r>=n || c>=n || grid[r][c]!=expval){
                return false;
            }
            if(expval==n*n-1){
                return true;
            }
            bool ans1=isHelper(grid , r-2,  c+1 ,  n , expval+1);
            bool ans2=isHelper(grid , r-1,  c+2 ,  n , expval+1);
            bool ans3=isHelper(grid , r+1,  c+2 ,  n , expval+1);
            bool ans4=isHelper(grid , r+2,  c+1 ,  n , expval+1);
            bool ans5=isHelper(grid , r+2,  c-1 ,  n , expval+1);
            bool ans6=isHelper(grid , r+1,  c-2 ,  n , expval+1);
            bool ans7=isHelper(grid , r-1,  c-2 ,  n , expval+1);
            bool ans8=isHelper(grid , r-2,  c-1 ,  n , expval+1);
            return ans1||ans2||ans3||ans4||ans5||ans6||ans7||ans8;
    }
    bool checkValidGrid(vector<vector<int>>& grid) {
        return isHelper(grid, 0 , 0 , grid.size(),0);
        
    }
};