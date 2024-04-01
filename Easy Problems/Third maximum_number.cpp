class Solution {
public:
    int thirdMax(vector<int>& nums) {
        long m1 = LONG_MIN;
        long m2 = LONG_MIN;
        long m3 = LONG_MIN;
        int i = 0;

        for(i = 0; i < nums.size(); i++) {
            if(nums[i] == m1 || nums[i] == m2 || nums[i] == m3) {
                continue;
            }
            if(nums[i] > m1) {
                m3 = m2;
                m2 = m1;
                m1 = nums[i];
            }  else if(nums[i] > m2) {
                m3 = m2;
                m2 = nums[i];
            } else if(nums[i] > m3) {
                m3 = nums[i];
            }
        }

        if(m3 != LONG_MIN) {
            return m3;
        }

        return m1;
    }
};