/**
    * Checks if there are three consecutive odd numbers in the given vector.
    *
    * @param arr The input vector of integers.
    * @return True if there are three consecutive odd numbers, false otherwise.
**/
//Solution:
// This code implements the solution to check if there are three consecutive odd numbers in the given vector.
// The idea is to iterate through the vector and maintain a count of consecutive odd numbers.
// We increment the count if the current number is odd and reset the count if the current number is even.
// We return true if the count reaches 3, indicating that there are three consecutive odd numbers.
// The time complexity of this solution is O(n) where n is the number of elements in the vector.
// The space complexity is O(1) as we are using a constant amount of space.

// The code is as follows:
class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        int count = 0;
        for(int num : arr) {
            if(num % 2 != 0) {
                count++;
                if(count == 3) {
                    return true;
                }
            }
            else {
                count = 0;
            }
        }
        return false;
    }
};