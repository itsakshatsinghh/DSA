class Solution {
public:
    int maxProduct(int n) {
        vector<int> v;
        while(n>0){
            int d = n;
            d = n % 10;
            v.push_back(d);
            n = n / 10;
        }
        sort(v.begin() , v.end());
        int p = 1 ;
        int nig = v.size()-1;
    int a = v[nig ], b = v[nig -1] ;
        return a*b;
    }
};