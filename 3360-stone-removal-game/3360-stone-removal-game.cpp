class Solution {
public:
    bool canAliceWin(int n) {
        int i = 10;
        bool ac = true;
        while(n>=i){
            n-= i;
            i--;
            ac = !ac;
        }
        return !ac;
    }
};