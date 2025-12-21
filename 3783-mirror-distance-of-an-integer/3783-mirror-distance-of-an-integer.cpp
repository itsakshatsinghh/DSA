class Solution {
public:
    int mirrorDistance(int n) {
        //this problem goes by breaking the number to the next number and then calculating the difference 
        //for breaking just use the concept of reversing the number by basically repeatdily dividing and adding
        int sum =0;
        int ognum=n;
        while(n>0){
            int remainder; 
            remainder=n%10;
            sum=sum*10+remainder;
            n=n/10;
        }
        return abs(ognum-sum);
    }
};