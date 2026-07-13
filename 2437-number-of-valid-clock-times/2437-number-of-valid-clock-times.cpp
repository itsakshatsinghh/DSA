class Solution {
public:
    int countTime(string t) {
        int ans = 1;
        if(t[4] == '?') ans = ans * 10;
        if(t[3] == '?') ans = ans * 6;
        
        if(t[0] == '?' && t[1] == '?') ans = ans * 24;
        else{
            if(t[1] == '?'){ 
                if(t[0] == '2' ) ans = ans * 4;
                else ans = ans * 10;
            }
            if(t[0] == '?'){
                if(t[1] < '4') ans = ans * 3;
                else ans = ans * 2;
            }
        }
        return ans;
    }
};