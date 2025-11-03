class Solution {
public:
    int minCost(string alpha, vector<int>& neededTime) {
        int time=0 ;
        for(int i =1;i<alpha.size();i++){
            if(alpha[i]==alpha[i-1]){
                time=time+min(neededTime[i],neededTime[i-1]);
                neededTime[i]=max(neededTime[i],neededTime[i-1]);
            }
        }
        return time;
        
    }
};