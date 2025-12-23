class Solution {
public:
    int expand(string &s , int left , int right){
        while(left>=0 && right<s.size() && s[left]==s[right]){
            left--; right++;
        }
        return right-left-1; //This will give the value upto where we need to fetch 
    }
    string longestPalindrome(string s) {
        if(s.empty()){
            return "";
        }
        int start = 0 , maxlen=0; 
        for(int i=0 ; i<s.size(); i++){
            //for odd elements
            int len1= expand( s, i , i);
            //for even elements 
            int len2= expand(s, i, i+1);
            //take max of these two 
            int len= max( len1 , len2);
            //now check condn 
            if(len>maxlen){
                maxlen=len;
                //upadte the start
                start= i-(len-1)/2;
            }

        }
        return s.substr(start , maxlen);
        
    }
};