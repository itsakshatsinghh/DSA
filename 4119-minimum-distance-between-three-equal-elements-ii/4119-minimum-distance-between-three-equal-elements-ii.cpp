class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        unordered_map<int , vector<int>> indecies;
        for(int i=0;i<nums.size();i++){
            indecies[nums[i]].push_back(i);
        }
        int minD = INT_MAX;
        bool found = false;
        for(auto const& pair: indecies){
            const vector<int>& indicex = pair.second;
            if(indicex.size()>=3){
                found=true;
                for (int i = 0; i <= indicex.size() - 3; ++i) {
                    int q=indicex[i];
                    int w=indicex[i+1];
                    int r=indicex[i+2];
                    int res = 2 * (r - q);
                    minD = min(minD, res);
                }
            }
        }
        
        return found ? minD : -1;   
    }
};