class Solution {
public:
    long long minimumCost(int cost1, int cost2, int costBoth, int need1, int need2) {
        long long c1 = cost1 , c2 = cost2 , cb = costBoth , n1 = need1 , n2 = need2;
        long long ans;
        c1 = min(c1 , cb);
        c2 = min(c2 , cb);
        cb = min(cb , c1+c2);
        long long less = min (n1,n2);
        ans = less*cb;

        ans+= (n1 - less)*c1;
        ans+= (n2 - less)*c2;
        return ans;
    }
};