// Solution:
// Date: 2021-07-25 12:00:00
// The subsetsWithDup function takes a vector of integers nums as input and returns all possible subsets of the input vector.
// The function initializes an empty vector res to store the subsets and an empty vector subset to store the current subset.
// The function sorts the input vector to handle duplicates.
// The function calls the backtrack function with the res, subset, nums, and start index as arguments.
// The backtrack function adds the current subset to the res vector and iterates through the input vector starting from the start index.
// The function recursively calls itself with the updated subset and the next index.
// The function backtracks by removing the last element added before returning.
// Finally, the function returns the res vector containing all possible subsets of the input vector.
// The time complexity of this solution is O(2^n), as there are 2^n possible subsets of the input vector.
// The code is given below:
class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> subset;
        sort(nums.begin(), nums.end());
        backtrack(res, subset, nums, 0);
        return res;
    }
    
    void backtrack(vector<vector<int>>& res, vector<int>& subset, vector<int>& nums, int start) {
        res.push_back(subset);
        for(int i = start; i < nums.size(); i++) {
            if(i > start && nums[i] == nums[i-1]) continue;
            subset.push_back(nums[i]);
            backtrack(res, subset, nums, i + 1);
            subset.pop_back();
        }
    }
};