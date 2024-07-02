# For the minimum stairs required we have used all three methods from recurssion to Memoization and tabulation.


```class Solution {
public:
    int solve2(vector<int>& cost, int n) {
        vector<int> dp(n+1);
        dp[0] = cost[0];
        dp[1] = cost[1];

        for(int i = 2; i < n ; i++) {
            dp[i] = cost[i] + min(dp[i-1],dp[i-2]);
        }
        return min(dp[n-1], dp[n-2]);
    }
    int solve1(vector<int>& cost,int n,vector<int>& dp) {
        // Base case
        if(n==0) return cost[0];
        if(n==1) return cost[1];

        // stored hai answer ya nahi
        if(dp[n] != -1) {
            return dp[n];
        }

        dp[n] = cost[n] + min(solve1(cost,n-1,dp),solve1(cost,n-2,dp));
        // return ans;
        return dp[n];
    }
    int solve(vector<int>& cost,int n) {
        // Base case
        if(n==0) return cost[0];
        if(n==1) return cost[1];


        int ans = cost[n] + min(solve(cost,n-1),solve(cost,n-2));
        return ans;
    }
    int minCostClimbingStairs(vector<int>& cost) {
        // int n = cost.size();
        // int ans = min(solve(cost,n-1),solve(cost,n-2));
        // return ans;

        // DP array formation
        // int n = cost.size();
        // vector<int> dp(n+1,-1);
        // int ans = min(solve1(cost, n - 1, dp), solve1(cost, n - 2, dp));
        // return ans;

        int n = cost.size();
        return solve2(cost,n);

    }
};```