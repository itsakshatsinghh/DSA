class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int> sorter = arr; vector<int> ans(arr.size());
        sort(sorter.begin() , sorter.end());
        unordered_map<int, int> ranker;
        int rank = 1 ;
        for(int i: sorter){
            //to assign the rank if not already 
            if(ranker.find(i) == ranker.end()){
                ranker[i] = rank;
                rank++;
            }
        }
        //retriving the data
        for(int i = 0 ; i<ans.size() ; i++){
            ans[i] = ranker[arr[i]];
        }
        return ans;
        
    }
};