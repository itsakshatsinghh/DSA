class Solution {
public:
    int maximumSaleItems(vector<vector<int>>& items, int budget) {
        int n = items.size();
        long long min_p = 2e9, max_items = 0;
        
        vector<int> freq(n + 1, 0), mults(n + 1, 0), idx;
        for (auto& it : items) if (it[0] <= n) freq[it[0]]++;
        
        for (int f = 1; f <= n; ++f)
            for (int m = f; m <= n; m += f) mults[f] += freq[m];

        for (int i = 0; i < n; ++i) {
            min_p = min(min_p, (long long)items[i][1]);
            if (mults[items[i][0]] - 1 > 0) idx.push_back(i);
        }

        sort(idx.begin(), idx.end(), [&](int a, int b) { return items[a][1] < items[b][1]; });

        for (int i : idx) {
            long long p = items[i][1], limit = mults[items[i][0]] - 1;
            if (2 * min_p <= p) break;
            long long buy = min(limit, budget / p);
            budget -= buy * p;
            max_items += buy * 2;
        }

        return max_items + (budget / min_p);
        
    }
};