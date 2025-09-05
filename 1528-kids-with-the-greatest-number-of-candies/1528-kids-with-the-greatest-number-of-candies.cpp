class Solution {
public:
    int maxcandy(vector<int>& candies){
        int sz=candies.size();
        int maxint=INT_MIN;
        for(int i=0;i<sz;i++){
            if(maxint<candies[i]){
                maxint=candies[i];
            }
        }
        return maxint;
    }
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int maxcand=maxcandy(candies);
        int n =candies.size();
        vector<bool> result(n);
        for(int i=0;i<n;i++){
                result[i]=(extraCandies+candies[i]>=maxcand);
        }
        return result;

        

        
    }
};