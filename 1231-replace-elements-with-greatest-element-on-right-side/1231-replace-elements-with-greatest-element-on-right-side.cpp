class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n = arr.size(); 
        vector<int> result(n);
        int maxtillnow=-1;
        for(int i =n-1; i>=0;i--){
            result[i]=maxtillnow;
            maxtillnow=max(maxtillnow, arr[i]);
            
        }
        return result;
        
    }
};