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
