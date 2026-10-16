class Solution {
public:
    int index;
    int solve (string s){
        int ans = 0;
        index++;
        while (index < s.size() && s[index] != ')'){
            ans += solve(s);
        }
        index++;
        if (ans == 0) ans = 1;
        else ans *= 2;
        return ans;
    }
    int scoreOfParentheses(string s) {
        index = 0;
        int ans = 0;
        while (index < s.size()){
            ans += solve(s);
        }
        return ans;
    }
};