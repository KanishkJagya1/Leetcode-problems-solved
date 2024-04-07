// my code
class Solution {
public:
    bool checkValidString(string s) {
        int leftMin = 0, leftMax = 0;

        for (char c : s) {
            if (c == '(') {
                leftMin++;
                leftMax++;
            } else if (c == ')') {
                leftMin--;
                leftMax--;
            } else {
                leftMin--;
                leftMax++;
            }
            if (leftMax < 0) return false;
            if (leftMin < 0) leftMin = 0;
        }
        
        return leftMin == 0;
    }
};
// optimal solution according to the question with * can be treated as (,)," " as well
class Solution {
public:
    bool checkValidString(string s) {
        int openMin = 0, openMax = 0;
        for (char c:s) {
            if (c=='(') {openMax++; openMin++;}
            else if (c==')') {openMax--; openMin--;}
            else {openMax++; openMin--;}
            openMin = max(0, openMin);
            if (openMax < 0) return 0;
        } return !openMin;
    }
};