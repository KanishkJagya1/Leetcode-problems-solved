class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int max = 0;
        for(int i=0;i<nums.size();i++) {
            max += nums[i];
            while(nums[i] != 0) {
                int temp = nums[i] % 10;
                max -= temp;
                nums[i] = nums[i]/10;
            }
        }
        
        return max;
    }
};