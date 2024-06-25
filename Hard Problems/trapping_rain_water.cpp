//Solution:
// This code implements the two-pointer approach to solve the trapping rain water problem.
// The idea is to use two pointers, one starting from the left and the other starting from the right.
// We maintain two variables, leftMax and rightMax, to keep track of the maximum height encountered so far from the left and right sides respectively.
// We also maintain a variable water to keep track of the total amount of water trapped.
// We iterate until the left pointer is less than the right pointer.
// If the leftMax is less than the rightMax, we move the left pointer to the right and update the leftMax if necessary.
// We calculate the amount of water trapped at the current position by subtracting the height at the left pointer from the leftMax.
// Similarly, if the rightMax is less than or equal to the leftMax, we move the right pointer to the left and update the rightMax if necessary.
// We calculate the amount of water trapped at the current position by subtracting the height at the right pointer from the rightMax.
// Finally, we return the total amount of water trapped.
class Solution {
public:
    int trap(vector<int>& height) {
        int left = 0;
        int right = height.size() - 1;
        int leftMax = height[left];
        int rightMax = height[right];
        int water = 0;

        while(left < right) {
            if(leftMax < rightMax) {
                left++;
                leftMax = max(leftMax,height[left]);
                water += leftMax - height[left];
            }
            else { 
                right--;
                rightMax = max(rightMax,height[right]);
                water += rightMax - height[right];
            }
        }

        return water;
    }
};