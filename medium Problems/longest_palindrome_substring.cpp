class Solution {
public:
    string longestPalindrome(string s) {
        int start = 0,end = 0;
        if(s.empty()) {
            return "";
        }
        for(int i=0;i<s.size();i++) {
            int odd = expandAroundCenter(s,i,i);
            int even = expandAroundCenter(s,i,i+1);
            int max_len = max(odd,even);

            if(max_len > end - start) {
                start = i - (max_len - 1)/2;
                end = i + max_len / 2;
            }
        }
        return s.substr(start,end-start +1);
    }
private:
    int expandAroundCenter(string s, int left, int right) {
        while (left >= 0 && right < s.length() && s[left] == s[right]) {
            left--;
            right++;
        }
        return right - left - 1;
    }
};