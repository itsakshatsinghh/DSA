class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector <int> charind(128,-1);
        int left=0;
        int maxlen=0;
        for(int right=0;right<s.length();++right){
            if (charind[s[right]] >= left) {
            left = charind[s[right]] + 1;
            }
            charind[s[right]] = right;
        maxlen = max(maxlen, right - left + 1);

        }
       return maxlen;
        
    }
};