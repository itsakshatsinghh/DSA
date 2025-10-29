class Solution {
public:
    int smallestNumber(int n) {
        int pot=1;
        if(n<=1){
            return 1;
        }
        while(pot<=n){
            pot=pot*2;
            
        }
        return pot-1;
    }
};