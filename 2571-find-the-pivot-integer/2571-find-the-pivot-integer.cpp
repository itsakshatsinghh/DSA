class Solution {
public:
    int pivotInteger(int n) {
        int sum  = n*(n+1)/2;
        int num=int(sqrt(sum));
        if(num*num==sum){
            return num;
        }
        return -1;
        
    }
};