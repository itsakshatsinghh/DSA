class Solution {
public:
    int countOperations(int n, int m) {
        int ans=0;
        while(n>0 && m >0){
            if(n>m){
                n=n-m;
            }else{
                m=m-n;
            }
            ans++;
        }
        return ans;
        
    }
};