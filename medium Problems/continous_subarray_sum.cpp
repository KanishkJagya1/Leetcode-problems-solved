class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        //2 pointer approach gives TLE (time limit exceeded)
        // int sum = 0;
        // for(int i = 0; i < nums.size()-1 ; i++) {
        //     sum = nums[i];
        //     for(int j = i+1; j < nums.size(); j++) {
        //         sum = nums[j] + sum;
        //         if( sum%k == 0) {
        //             return true;
        //         }
        //     }
        //     sum = 0;
        // }
        // return false;

        //unordered_map approach
        int n = nums.size();
        unordered_map<int,int> remainderMap;
        int cumulativeSum = 0;

        remainderMap[0] = -1;

        for(int i = 0; i < n ; i++) {
            cumulativeSum += nums[i];

            int remainder = k == 0 ? cumulativeSum : cumulativeSum%k;
            if(remainderMap.count(remainder)) {
                if(i - remainderMap[remainder] > 1) {
                    return true;
                }
            }
            else {
                remainderMap[remainder] = i;
            }
        }
        return false;
    }
};