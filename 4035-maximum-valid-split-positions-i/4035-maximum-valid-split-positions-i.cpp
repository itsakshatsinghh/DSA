class Solution {
public:
    int split(vector<int>& arr){
        int m = arr.size();
        if(m<2) return 0;
        //pref gcd and suff gcd
        vector<int> pf(m) , sf(m);
        pf[0] = arr[0];
        for(int i = 1; i<m ; i++){
            pf[i] = gcd(arr[i] , pf[i-1]);
        }

        sf[m-1] = arr[m-1];
        for(int i = m-2 ; i>=0 ; i--){
            sf[i] = gcd(sf[i+1] , arr[i]);
        }
        //validsplit = gcd(pf) = gcd(sf)
        int valsp = 0;
        for(int i = 0 ; i<m-1 ; i++){
            if(pf[i] == sf[i+1]){
                valsp++;
            }
        }
        return valsp;
    }
    int maxValidSplits(vector<int>& nums) {
        int n = nums.size();
        //removing 0 elem
        int mxspl = split(nums);
        //1 split
        for(int i = 0 ; i<n ; i++){
            vector<int> arr;
            arr.reserve(n-1);
            for(int j = 0 ; j<n ; j++){
                if(i==j) continue;
                arr.push_back(nums[j]);
            }
            mxspl = max(mxspl , split(arr));
        }
        return mxspl;
    }
};