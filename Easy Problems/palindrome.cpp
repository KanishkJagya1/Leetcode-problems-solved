class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0 || (x % 10 == 0 && x != 0)) {
            return false;
        }
    
        long long int reversed = 0;
        int original = x;
        
        // Reverse the number
        while (x > 0) {
            reversed = reversed * 10 + x%10;
            x /= 10;
        }
        
        // Check if the reversed number is equal to the original number
        return reversed == original;
        }
};