//Solution:
// Date: 2021-07-25 12:00:00
// The numWaterBottles function takes two integers, numBottles and numExchange, as input and returns the maximum number of water bottles that can be drunk.
// The function initializes two variables, sum and emptyBottles, to 0.
// The function enters a while loop that continues as long as the number of bottles is greater than 0.
// In each iteration of the loop, the function adds the number of bottles to the sum variable.
// The function also adds the number of bottles to the emptyBottles variable.
// The function then calculates the number of new bottles that can be obtained by exchanging empty bottles for full bottles and updates the number of bottles and empty bottles accordingly.
// Finally, the function returns the sum variable, which contains the total number of bottles that can be drunk.
// The time complexity of this solution is O(log(numBottles)), as the number of iterations in the while loop is proportional to the logarithm of the input size.
// The code is given below:
class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int sum = 0,emptyBottles=0;
        while(numBottles > 0) {
            sum += numBottles;
            emptyBottles += numBottles;
            numBottles = emptyBottles/numExchange;
            emptyBottles = emptyBottles%numExchange;
        }
        return sum;
    }
};