class Solution {
public:
    int characterReplacement(string s, int k) {
        int ans = 0 , n = s.length();
        for(char c ='A' ; c<='Z' ; c++){
            int replaces = 0 , r = 0 , l = 0;
            while(r<n){
                if(s[r]==c){
                    r++;
                }else if(replaces<k){
                    r++ , replaces++;
                }else if(s[l]==c){
                    l++;
                }else{
                    l++ , replaces--;
                }

                //ans
                ans = max( ans , r-l);
            }
        }
        return ans;
    }
};