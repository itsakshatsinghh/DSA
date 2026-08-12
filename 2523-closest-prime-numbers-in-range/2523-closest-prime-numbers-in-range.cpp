class Solution {
public:
    vector<int> closestPrimes(int left, int right) {
        vector<bool> sv(right+1 , true);
        sv[0]=sv[1]=false;
        for(int i = 2 ; i*i<= right ; i++){
            if(sv[i]==true){
                for(int j = i*i ; j<= right ; j+=i){
                    sv[j] = false;
                }
            }
        } // marked all the primes from 0 to R
        vector<int> p;
        for(int i = left ; i<=right ; i++){
            if(sv[i]==true){
                p.push_back(i);
            }
        }
        //edje case 
        if(p.size()<2) return {-1,-1};
        int mgap = INT_MAX;
        vector<int> ans = {-1,-1}; //init the ans array 
        for(int i = 1 ; i<p.size() ; i++){
            int g = p[i]-p[i-1];
            if(g<mgap){
                mgap= min(g , mgap);
                ans = {p[i-1] , p[i]};
            }
        }
        return ans;
    }
};
//find the primes in the given range , sort and return the first 2 primes from it