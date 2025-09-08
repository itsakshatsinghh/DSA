class Solution {
public:
    bool no0(int n){
        if(n==0){
            return false;
        }
     while(n>0){
        int r = n%10;
        if(r==0){
            return false;
        }
        n=n/10;

     }
     return true;
    }
    vector<int> getNoZeroIntegers(int n) {
        for(int i=0;i<n;i++){
            int a=i; int b= n-i;
            if(no0(a) && no0(b)){
                return {a,b};
            }
        }
        return {};
        
    }
};