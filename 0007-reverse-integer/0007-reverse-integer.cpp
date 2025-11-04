class Solution {
public:
    int reverse(int x) {
        if(x==INT_MIN){
            return 0;
        }
        bool negetive = x<0;
        if(negetive){
            x=-x;
        }
        long long ans=0;
        vector<int> dig;
        while(x>0){
            dig.push_back(x%10);
            x=x/10;
        }
        //edge case
        if(dig.empty()){
            return 0;
        }
        
        // reconstruction 
        for(int d: dig){
            ans=ans*10+d;
            if(ans>INT_MAX){
                return 0;//overflow
            }
        }

        return negetive ? -(ans) : ans;
    }
};