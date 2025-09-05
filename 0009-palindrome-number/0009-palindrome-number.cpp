class Solution {
public:
    bool isPalindrome(int x) {
        long long temp=x;
        long long finalres=0;
        if(x<0){
            return false;
        }
        if(x<10){
            return true;
        }
        else{
            while(temp>0){
            int r=temp%10;
            finalres=finalres*10+r;
            temp=temp/10;
            }
            
            return x==finalres;

        }
        
    }
};