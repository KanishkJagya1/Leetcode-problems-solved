//Solution
//Inside the minKbitFlips function, we first initialize the count variable to 0. We then create a vector of booleans called flipped, which will keep track of whether a number has been flipped or not. We also initialize a variable called validFlipsWindow to 0, which will keep track of the number of valid flips in the current window.
//We then iterate over the nums vector using a for loop. Inside the loop, we check if the current index i is greater than or equal to k. If it is, we check if the number at index i-k has been flipped. If it has been flipped, we decrement the validFlipsWindow variable.
//Next, we check if the number at index i is equal to the validFlipsWindow modulo 2. If it is, we check if i+k is greater than the size of the nums vector. If it is, we return -1, as we cannot flip k bits starting from index i. Otherwise, we increment the validFlipsWindow variable, set the flipped[i] variable to true, and increment the count variable.
//Finally, we return the count variable, which represents the minimum number of k-bit flips required to make all numbers in the nums vector equal.
//Time complexity analysis

//The time complexity for this approach is O(n), where n is the size of the nums vector. This is because we iterate over the nums vector only once.
//Space complexity analysis
//The space complexity for this approach is O(n), where n is the size of the nums vector. This is because we use a vector of booleans called flipped to keep track of whether a number has been flipped or not.
class Solution {
public:
    int minKBitFlips(vector<int>& nums, int k) {
        int count = 0;

        vector<bool> flipped(nums.size(),false);

        int validFlipsWindow = 0;

        for(int i = 0 ; i < nums.size();i++) {
            if(i>=k) {
                if(flipped[i-k]) {
                    validFlipsWindow--;
                }
            }

            if(validFlipsWindow%2==nums[i]) {
                if(i+k > nums.size()) {
                    return -1;
                }

                validFlipsWindow++;
                flipped[i] = true;
                count++;
            }
        }
        return count;
    }
};