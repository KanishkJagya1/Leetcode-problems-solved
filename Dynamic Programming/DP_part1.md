---
title: "TREE PART 1"
author: "Kanishk Jagya"
date: "2024-06-14"
---

# INTRODUCTION TO DYNAMIC PROGRAMMING ---> (GAME CHANGER)

- Overlapping sub problems
- need to optimize this problem
- can be done using dynamic programming

## APPROACHES TO DP

### TOP-DOWN APPROACH (MEMOIZATION)

- CODE GIVEN IS :
```
        class Solution {
        public:
            int topDownSolve(int n, vector<int>& dp) {
                // Base case
                if(n==0 || n==1) return n;

                // Step 3: check if ans already exist
                if(dp[n] != -1) {
                    return dp[n];
                }

                //step 2 : replace ans with dp[n]
                dp[n] =topDownSolve(n-1,dp) + topDownSolve(n-2,dp);
                return dp[n];
            }
            int fib(int n) {
                // Step 1 : Create a DP array
                vector<int> dp(n+1,-1);
                int ans = topDownSolve(n,dp);
                return ans;
            }
        };
```



### BOTTOM-UP APPROACH (TABULATION)