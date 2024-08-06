// Solution
// Difficulty : Medium
// Topic : Greedy
// Time complexity : O(n)
// Space complexity : O(1)

// This code defines a class Solution with a member function minimumPushes. Let's break down what this function does:

// It takes a string word as input.
//    It initializes a vector frequency of size 26 with all elements set to 0. This vector will be used to store the frequency of each character in the word.
//    It iterates over each character c in the word using a range-based for loop.
//    Inside the loop, it increments the frequency of the character c by 1. The character c is converted to an index by subtracting the ASCII value of 'a' from it. This ensures that the frequency of 'a' is stored at index 0, 'b' at index 1, and so on.
//    After counting the frequencies, the frequency vector is sorted in descending order using sort function with frequency.rbegin() and frequency.rend() as arguments. This will arrange the frequencies in decreasing order.
//    An integer variable ans is initialized to 0. This variable will store the minimum number of pushes required to type the word.
//    The code then iterates over the frequency vector using a for loop from index 0 to 25 (representing the 26 alphabets).
//    Inside the loop, it checks if the frequency at index i is 0. If it is, it breaks out of the loop since there are no more characters with non-zero frequency.
//    Otherwise, it calculates the number of pushes required for the characters with frequency frequency[i]. The formula used is (i/8 + 1) * frequency[i]. This formula calculates the number of pushes required based on the position of the character in the frequency list. Characters with higher frequency are assigned a higher weightage.
//    The calculated number of pushes is added to the ans variable.
//    Finally, the function returns the value of ans, which represents the minimum number of pushes required to type the word.
//   In summary, this code calculates the minimum number of pushes required to type a given word based on the frequency of its characters. The characters with higher frequency contribute more to the total number of pushes.

class Solution {
public:
    int minimumPushes(string word) {
        vector<int> frequency(26,0);
        for(char c : word) {
            frequency[c - 'a']++;
        }
        sort(frequency.rbegin(),frequency.rend());

        int ans = 0;
        for(int i = 0 ; i < 26 ; i++) {
            if(frequency[i] == 0) break;
            ans += (i/8 + 1) * frequency[i];
        }
        return ans;
    }
};