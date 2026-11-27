class Solution {
public:
    int maximumSaleItems(vector<vector<int>>& items, int budget) {
    
        int n = items.size(), maxti = 0;

        
        vector<int> freeb(n, 0), idx(n);
        for(int i = 0; i < n; i++) {
            idx[i] = i;
            for(int j = 0; j < n; j++) {
                if(i != j && items[j][0] % items[i][0] == 0) freeb[i]++;
            }
        }

        
        sort(idx.begin(), idx.end(), [&](int a, int b) { 
            return items[a][1] > items[b][1]; 
        });

        
        vector<int> dp(budget + 1, -1);
        dp[0] = 0;

        for(int i : idx) {
            int anchp = items[i][1], itemsg = 1 + freeb[i];

            
            if (budget >= anchp) {
                for (int w = 0; w <= budget - anchp; w++) {
                    if (dp[w] != -1) {
                        maxti = max(maxti, itemsg + dp[w] + ((budget - anchp - w) / anchp));
                    }
                }
            }

            
            for (int w = budget; w >= anchp; w--) {
                if (dp[w - anchp] != -1) dp[w] = max(dp[w], dp[w - anchp] + itemsg);
            }
        }
        return maxti;
    }
};