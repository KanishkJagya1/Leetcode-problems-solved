class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int n = nums.size();
        if (n==1) return true;

        bool isInc = true;
        bool isDec = true;

        for(int i = 1; i < nums.size(); i++) {
            if(!isInc && !isDec) return false;

            if(nums[i] > nums[i-1]) {
                isDec = false;
            }
            if(nums[i] < nums[i-1]) {
                isInc = false;
            }
        }
        return isInc || isDec;
    }
};