class Solution {
public:
    int characterReplacement(string s, int k) {
        int ans = 0 , n = s.size();
        for(char c = 'A' ; c<='Z' ; c++){
            int replaces = 0 , l = 0 , r = 0;
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
                ans = max(ans , r-l);
            }
        }
        return ans;
    }
};