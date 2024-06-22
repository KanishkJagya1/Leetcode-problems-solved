//Solution
//use a vector to store the number of odd numbers in the prefix of the array
//then iterate through the array and check if the number of odd numbers in the prefix is greater than or equal to k
//if it is then add the number of subarrays that can be formed with the current prefix to the answer
//then increment the number of subarrays that can be formed with the current prefix
//finally return the answer


class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> temp(n+1,0);
        temp[0] = 1;
        int ans = 0, t = 0;
        for(int v : nums) {
            t += v & 1;
            if(t - k >= 0) {
                ans += temp[t - k];
            }
            temp[t]++;
        }
        return ans;
    }
};