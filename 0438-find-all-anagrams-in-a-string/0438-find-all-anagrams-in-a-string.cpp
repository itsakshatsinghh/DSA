class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> ans;
        int m = s.size();
        int n = p.size();
        //base case 
        if(n>m){
            return ans;
        }
        vector<int> f1(26,0);
        vector<int> f2(26,0);

        //first window
        for(int i = 0 ; i<n ; i++){
            f1[s[i]-'a']++;
            f2[p[i]-'a']++;
        }
        //primary case
        if(f1==f2){
            ans.push_back(0);
        }
//sliding windows 
        for(int i = n ; i<m ; i++){
            f1[s[i]-'a']++;
            f1[s[i-n] - 'a']--;

            if(f1==f2){
                ans.push_back(i-n+1);
            }
        }
        return ans;
        
    }
};