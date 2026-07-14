class Solution {
public:
    int twoCitySchedCost(vector<vector<int>>& costs) {
        // frst we need to sort the array based upon the cost difference  basically a - b and after that we are going to left with half people for a city and half for b city and since there are 2n people we wont have any issues 
        sort(costs.begin() , costs.end() , comparing);
        int totalc = 0 , n = costs.size();
        for(int i = 0; i<n/2;i++ ){
            totalc +=costs[i][0]; //first half
            totalc +=costs[i+(n/2)][1]; //second half
        }
        return totalc;
        
    }
    static bool comparing(const vector<int>& a , const vector<int>& b){
        int diffa = a[0] - a[1];
        int diffb = b[0] - b[1];
        return diffa<diffb;
    }
};