class Solution {
public:
    string minWindow(string s, string t) {
        
        ///////////// x3
        vector<int> map(128 , 0);
        for(auto c: t) map[c]++; // freq mapping
        int counter =t.size() , st= 0 , e= 0 , minl =INT_MAX , head = 0;
        while(e<s.size()){
            if(map[s[e++]]-->0) counter --;
            while(counter==0){
                if(e-st<minl) minl = e-(head=st);
                if(map[s[st++]]++==0) counter++;
            }
        }
        return minl == INT_MAX ? "":s.substr(head,minl);

    }
};