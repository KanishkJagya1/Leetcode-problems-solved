class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        // // 2 pointer approach gives us the TLE (time limit exceeded error)
        // int sum = 0,count = 0;
        // for(int i = 0 ; i < nums.size() ; i++) {
        //     sum = nums[i];
        //     if(nums[i]%k==0) count++;
        //     for(int j = i + 1; j < nums.size() ; j++) {
        //         sum += nums[j];
        //         if(sum%k == 0) {
        //             count++;
        //         }
        //     }
        // }
        // return count;

        //Unordered_map approach
        unordered_map<int,int> map;
        map[0] = 1;
        int prefixSum = 0;
        int count = 0;
        for(int i = 0; i < nums.size(); i++) {
            prefixSum+= nums[i];
            int remainder = prefixSum % k;
            if(remainder < 0) {
                remainder+=k;
            }
            if(map.find(remainder) != map.end()) {
                count += map[remainder];
                map[remainder]++;
            }
            else {
                map[remainder] = 1;
            }
        }
        return count;
    }
};