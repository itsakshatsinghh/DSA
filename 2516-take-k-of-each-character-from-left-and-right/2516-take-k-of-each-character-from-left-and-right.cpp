class Solution {
public:
    int takeCharacters(string s, int k) {
        //counting the total frequency 
        vector<int> freq(3,0);
        for(char ch: s){
            freq[ch-'a']++;
        }
        //checking the first case
        for(int i = 0 ; i<3 ; i++){
            if(freq[i]<k){
                return -1;
            }
        }
        //maximum allowed characters
        vector<int> allowed(3,0);
        for(int i = 0 ; i<3 ; i++){
            allowed[i] = freq[i]-k;
        }
        
        //sliding window 
        int l = 0 , maxwin = 0;
        vector<int> window(3, 0);
        for(int r = 0 ; r<s.size() ; r++){
            // Include current character
            window[s[r] - 'a']++;
            while (window[s[r] - 'a'] > allowed[s[r] - 'a']) {
                window[s[l] - 'a']--;
                l++;
            }
            maxwin = max(maxwin , r-l+1);

        }
        
        return s.size() - maxwin;
    }
};