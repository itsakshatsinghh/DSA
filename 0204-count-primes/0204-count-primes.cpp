class Solution {
public:
    int countPrimes(int n) {
        //bool array 
        vector<bool> prime(n+1 , true);
        prime[0] = false;
        prime[1] = false;
        int ans = 0;
        for(int i = 2 ; i*i < n ; i++){
            if(prime[i]==true){
                for(int j = i*i ; j < n ; j+=i){
                    prime[j] = false;
                }
            }
        }
        //count
        for(int i = 2 ; i<n ; i++){
            if(prime[i]==true){
                ans++;
            }
        }
        return ans;
    }
};