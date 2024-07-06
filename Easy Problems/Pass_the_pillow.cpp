// Solution:
// Date: 2021-07-25 12:00:00
// The passThePillow function takes two integers, n and time, as input and returns the index of the person who has the pillow at the end of the given time.
// The function calculates the number of chunks of time that have passed by dividing the total time by the number of people minus one (n - 1).
// If the number of chunks is even, the function returns the index of the person who has the pillow at the time given by the remainder of the total time divided by the number of people minus one (n - 1) plus one.
// If the number of chunks is odd, the function returns the index of the person who has the pillow at the time given by the number of people minus the remainder of the total time divided by the number of people minus one (n - 1).
// The time complexity of this solution is O(1), as it performs a constant number of operations regardless of the input size.
// The code is given below:
class Solution {
public:
    int passThePillow(int n, int time) {
        int chunks = time / (n - 1);
        return chunks%2==0 ? (time % (n - 1) + 1) : (n - time % (n - 1));
    }
};