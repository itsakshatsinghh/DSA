class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        //this problem can be solved by doing either sliding window or even just a enumeration 
        //enumeration 

        vector<int> ans;
        for(int i = 1 ; i<=9 ; i++){
            int n = i;
            for(int j = i+1 ; j <= 9 ; j++){
                n = n*10+j;
                if(n>=low & n<=high){
                    ans.push_back(n);
                }
            }
        }
        sort(ans.begin() , ans.end());
        return ans;
    }
};

//if we want to use sliding window we need to make a string and then using that we can solve the question 
/*
class Solution {
public:
    int len(int n){
        int count=0;
        while(n){
            n/=10;
            count++;
        }
        return count;
    }
    string s="123456789";
    vector<int> sequentialDigits(int low, int high) {
        int lowLen=len(low);
        int highLen=len(high);
        vector<int> ans;
        for(int len=lowLen;len<=highLen;len++){
            for(int i=0;i<9-len+1;i++){
                int num=stoi(s.substr(i,len));
                if(num>=low and num<=high) ans.push_back(num);
            }
        }
        return ans;
    }
};
*/
