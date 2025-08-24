class Solution {
public:
    int climbStairs(int n) {
        if (n <= 2) return n;
        int p1 = 2, p2 = 1;
        for(int i = 3; i <= n; i++){
            int cur=p1+p2;
            p2=p1;
            p1=cur;

        }
        return p1;
        
    }
};