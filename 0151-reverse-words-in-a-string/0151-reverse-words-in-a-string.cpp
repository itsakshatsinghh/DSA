class Solution {
public:
    string reverseWords(string s) {
        int n = s.length() ; string ans ="";
        reverse(s.begin() , s.end());
        for(int i = 0 ; i<n ; i++){
            string w = "";
            while(i<n && s[i]!=' '){
                w = w+s[i];
                i++;
            }
            reverse(w.begin() , w.end());
            if(w.size()>0){
                ans = ans+" "+w;
            }
        }
       return ans.substr(1);
    }
};