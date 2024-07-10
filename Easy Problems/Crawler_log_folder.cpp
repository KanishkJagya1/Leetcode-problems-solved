// Solution:
// Date: 2021-07-25 12:00:00
// The minOperations function takes a vector of strings logs as input and returns the minimum number of operations required to navigate to the target folder.
// The function initializes an integer ops to 0.
// The function iterates through the logs vector and checks if the current log is "../" and the number of operations is greater than 0.
// If the condition is true, the function decrements the value of ops by 1.
// If the current log is not "../" or "./", the function increments the value of ops by 1.
// Finally, the function returns the value of ops, which represents the minimum number of operations required to navigate to the target folder.
// The time complexity of this solution is O(n), where n is the number of logs in the input vector.
// The code is given below:
class Solution {
public:
    int minOperations(vector<string>& logs) {
        int ops = 0;
        for(int i = 0 ; i < logs.size() ; i++) {
            if(logs[i]=="../" && ops > 0) {
                ops -= 1;
                continue;
            }
            else if(logs[i] != "../" && logs[i] != "./") {
                ops += 1;
            }
        }
        return ops;
    }
};