class Solution {
public:
    int minNumberOperations(vector<int>& v1) {
        int opr=v1[0];
        for ( int i =1 ; i<v1.size(); i++){
            if(v1[i]>v1[i-1]){
                opr=opr+(v1[i]-v1[i-1]);
            }
        }
        return opr;
    }
};