---
title: "TREE PART 1"
author: "Kanishk Jagya"
date: "2024-06-14"
---

# DYNAMIC PROGRAMMING PRACTICE PROBLEMS

# COIN CHANGE (LEETCODE MEDIUM)

- You are given an integer array coins representing coins of different denominations and an integer amount representing a total amount of money.

- Return the fewest number of coins that you need to make up that amount. If that amount of money cannot be made up by any combination of the coins, return -1.

- You may assume that you have an infinite number of each kind of coin.


## RECURSSIVE APPROACH FOR THE ABOVE WITH EXPONENTIAL TIME COMPLEXITY

- CODE is :
```
    class Solution {
        public:

            int solveUsingRecurssion(vector<int>& coins, int amount) {
                // Base case
                if(amount == 0) {
                    return 0;
                }

                if(amount<0) {
                    return INT_MAX;
                }

                int mini = INT_MAX;
                for(int i = 0 ; i < coins.size();i++) {
                    int ans = solveUsingRecurssion(coins, amount-coins[i]);
                    if(ans != INT_MAX) {
                        mini = min(mini,ans+1);
                    }
                }
                return mini;
            }
            int coinChange(vector<int>& coins, int amount) {
                int ans = solveUsingRecurssion(coins,amount);
                if(ans == INT_MAX) return -1;
                else {
                    return ans;
                }
            }
        };
```



## TOP DOWN APPROACH (MEMOIZATION)

- code given is :
```
    class Solution {
        public:
            int topDownSolve(vector<int>& coins, int amount, vector<int>& dp) {
                if (amount == 0) {
                    return 0;
                }
                if (amount < 0) {
                    return INT_MAX;
                }
                // Answer already exists
                if (dp[amount] != -1) {
                    return dp[amount];
                }

                int mini = INT_MAX;
                for (int i = 0; i < coins.size(); i++) { // Correct the loop to start from 0
                    int ans = topDownSolve(coins, amount - coins[i], dp);
                    if (ans != INT_MAX) {
                        mini = min(mini, ans + 1);
                    }
                }
                dp[amount] = mini;
                return mini;
            }

            int coinChange(vector<int>& coins, int amount) {
                vector<int> dp(amount + 1, -1);
                int ans = topDownSolve(coins, amount, dp);
                if (ans == INT_MAX) return -1;
                else {
                    return ans;
                }
            }
        };

```

## BOTTOM UP APPROACH (TABULATION)

```

```

