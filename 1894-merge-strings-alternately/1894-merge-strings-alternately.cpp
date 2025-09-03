class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int w1=word1.length();
        int w2=word2.length();
        string str="";
        int i=0,j=0;
        while(i<w1 && j<w2){//if both had the same length
            str=str+word1[i++];
            str=str+word2[j++];
        }
        while(i<w1){//if w2 is shorter
            str=str+word1[i++];
        }

        while(j<w2){//if w1 is shorter
            str=str+word2[j++];
        }
        return str;



    }
};