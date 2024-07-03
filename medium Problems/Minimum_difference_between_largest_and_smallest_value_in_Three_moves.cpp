//Solution:
//Date: 2021-07-25 12:00:00

// If the size of the given array is less than or equal to 4 then the value returned will always be 0
// If the size of the given array is greater than 4 then we will sort the array and then we will find the minimum difference between the largest and smallest value in the array after removing 3 elements from the array
// The minimum difference will be the minimum of the difference between the largest and smallest value after removing the first 3 elements and the difference between the largest and smallest value after removing the last 3 elements
// The minimum difference will be the minimum of the difference between the largest and smallest value after removing the first 2 elements and the difference between the largest and smallest value after removing the last 2 elements
// The minimum difference will be the minimum of the difference between the largest and smallest value after removing the first 1 elements and the difference between the largest and smallest value after removing the last 1 elements
// The minimum difference will be the minimum of the difference between the largest and smallest value after removing the first 0 elements and the difference between the largest and smallest value after removing the last 0 elements


// The code is given below:

class Solution {
public:
    int minDifference(vector<int>& nums) {
        if(nums.size() <= 4) return 0;

        sort(nums.begin(),nums.end());

        int n = nums.size();
        int mindiff = INT_MAX;

        for(int i = 0 ; i <= 3; i++) {
            mindiff = min(mindiff,nums[n - 4 + i] - nums[i]);
        }
        return mindiff;
    }
};