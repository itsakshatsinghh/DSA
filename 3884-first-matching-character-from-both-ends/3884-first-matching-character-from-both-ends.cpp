class Solution {
public:
    int firstMatchingIndex(string s) {
        int n = s.length()-1;
        int l = 0 ;
        while(l<=n){
            if(s[l]==s[n]){
                return l;
            }
            l++; n--;
        }
        return -1;
    }
};