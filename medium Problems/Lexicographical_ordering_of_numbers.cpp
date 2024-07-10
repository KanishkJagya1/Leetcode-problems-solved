// Solution:
// Date: 2021-07-25 12:00:00
// The lexicalOrder function takes an integer n as input and returns a vector of integers representing the lexicographical ordering of numbers from 1 to n.
// The function initializes an empty vector res to store the result.
// The function calls the recursive function with the initial value 1 and n as arguments.
// The recursive function adds the current number to the result vector and recursively calls itself with the next number.
// The recursive function also handles the case where the current number is a multiple of 10 and increments the number by 1.
// Finally, the function returns the result vector containing the lexicographical ordering of numbers from 1 to n.
// The time complexity of this solution is O(n), as each number from 1 to n is visited once.


class Solution {
public:
    vector<int> res;
    void recursive(int curr, int n) {
        if(curr > n) {
            return ;
        }
        res.push_back(curr);
        recursive(curr*10,n);
        if(curr%10 != 9) recursive(curr+1,n);
    }
    vector<int> lexicalOrder(int n) {
        recursive(1,n);
        return res;
    }
};