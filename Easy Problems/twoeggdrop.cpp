// Solution:
// Date: 2021-07-25 12:00:00
// The twoEggDrop function takes an integer n as input and returns the minimum number of moves required to determine the critical floor from which an egg will break.
// The function initializes an integer i to the square root of n and enters a while loop that continues as long as the sum of the first i integers is less than n.
// In each iteration of the loop, the function increments i by 1.
// Finally, the function returns the value of i, which represents the minimum number of moves required to determine the critical floor.
// The time complexity of this solution is O(sqrt(n)), as the number of iterations in the while loop is proportional to the square root of the input size.
// The code is given below:
class Solution {
public:
    int twoEggDrop(int n) {
        int i = ceil(sqrt(n));
        while((i+1)*i/2 < n) {
            i++;
        }
        return i;
    }
};