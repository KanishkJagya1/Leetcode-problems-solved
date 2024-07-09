// Solution:
// Date: 2021-07-25 12:00:00
// The generateParenthesis function takes an integer n as input and returns a vector of strings containing all valid combinations of n pairs of parentheses.
// The function initializes an empty vector res to store the final results and an empty string comb to store the current combination being built.
// The function calls the backtrack function with initial values of open and close set to 0, n, comb, and res.
// The backtrack function is a recursive helper function that generates all valid combinations of parentheses.
// The function has a base case that checks if the current combination is of the desired length and adds it to the results vector.
// The function then recursively calls itself with open incremented by 1 if open is less than n.
// The function also recursively calls itself with close incremented by 1 if close is less than open.
// The function backtracks by removing the last character added before returning.
// Finally, the function returns the results vector containing all valid combinations of parentheses.
// The time complexity of this solution is O(4^n/sqrt(n)), as there are 2n steps in the backtracking process, and at each step, there are 2 choices to make.
// The code is given below:

class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> res;  // To store the final results
        string comb;         // To store the current combination being built
        backtrack(0, 0, n, comb, res);
        return res;          // Return the results
    }
private:
    void backtrack(int open, int close, int n, string& comb, vector<string>& res) {
        // Base case: If the current combination is of the desired length, add it to the results
        if (comb.size() == n * 2) {
            res.push_back(comb);
            return;
        }

        // If we can still add an open parenthesis, add it and recurse
        if (open < n) {
            comb.push_back('(');
            backtrack(open + 1, close, n, comb, res);
            comb.pop_back();  // Backtrack by removing the last character added
        }

        // If we can still add a close parenthesis, add it and recurse
        if (close < open) {
            comb.push_back(')');
            backtrack(open, close + 1, n, comb, res);
            comb.pop_back();  // Backtrack by removing the last character added
        }
    }
};
