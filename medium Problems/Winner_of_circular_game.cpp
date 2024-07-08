// Solution:
// Date: 2021-07-25 12:00:00
// The findTheWinner function takes two integers, n and k, as input and returns the winner of the circular game.
// The function initializes a vector circle to store the numbers from 1 to n.
// The function initializes a variable curr_idx to 0.
// The function enters a while loop that continues as long as the size of the circle vector is greater than 1.
// In each iteration of the loop, the function calculates the index of the number to be removed and erases it from the circle vector.
// The function updates the value of curr_idx to the index of the removed number.
// Finally, the function returns the remaining number in the circle vector, which is the winner of the game.
// The time complexity of this solution is O(n*k), as the function iterates through the circle vector n times and removes k elements in each iteration.
// The code is given below:
class Solution {
public:
    int findTheWinner(int n, int k) {
        vector<int> circle;

        for(int i = 1; i <=n ; i++) {
            circle.push_back(i);
        }

        int curr_idx = 0;

        while(circle.size() > 1) {
            int remove = (curr_idx + k - 1) % circle.size();
            circle.erase(circle.begin() + remove);
            curr_idx = remove;
        }
        return circle[0];
    }
};