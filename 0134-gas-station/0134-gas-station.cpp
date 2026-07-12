class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int tg = 0;int tc = 0;
        for(int g: gas){
            tg = tg+g;
        }
        
        for(int c: cost){
            tc = tc+c;
        }
        
        int profit = 0 , n = gas.size();
        int ans = 0 ; 
        for(int i = 0 ; i< n ;){
            if(gas[i]+profit>=cost[i]){
                profit = gas[i]+profit-cost[i];
                i++;
            }else{
                profit = 0 ; 
                ans = i+1;
                i++;
                
            }
        }
        if(tg<tc){
            return -1;
        }
        return ans;
        
    }
};