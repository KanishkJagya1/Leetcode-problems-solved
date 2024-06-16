class Solution {
public:
    int minPatches(vector<int>& nums, int target) {
        long long miss = 1;
        int result = 0;
        size_t i = 0;

        while(miss<=target) {
            if(i < nums.size() && nums[i] <= miss) {
                miss+= nums[i];
                i++;
            }
            else {
                miss += miss;
                result++;
            }
        }

        return result;
    }
};