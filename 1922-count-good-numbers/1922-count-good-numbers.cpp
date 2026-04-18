class Solution {
public:
    const int badadiv= 1e9+7;
    int countGoodNumbers(long long n) {
        long long evenpow = (n+1) / 2 ; 
        long long oddpow = (n) / 2 ; 
        long long evenwy = power(5, evenpow);
        long long oddwy = power(4, oddpow);
        return (evenwy * oddwy) % badadiv;
        
    }
    long long power(long long base , long long pow){
        long long result = 1;
        base %= badadiv;
        while(pow>0){
            if(pow % 2 == 1){
                result = (result * base) % badadiv;

            }
            
            base = (base * base ) % badadiv;
            pow = pow / 2;

        }
        return result ;
    }
};