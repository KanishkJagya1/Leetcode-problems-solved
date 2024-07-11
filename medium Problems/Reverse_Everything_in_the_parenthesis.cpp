// Solution:
// Date: 2021-07-25 12:00:00
// The reverseParentheses function takes a string s as input and returns a string with the characters inside the parentheses reversed.
// The function initializes a stack of strings to store the characters inside the parentheses.
// The function also initializes a string temp to store the characters outside the parentheses.
// The function iterates through each character in the input string s.
// If the character is an opening parenthesis '(', the characters in temp are pushed onto the stack, and temp is cleared.
// If the character is a closing parenthesis ')', the characters in temp are reversed, combined with the top of the stack, and stored in temp.
// If the character is neither an opening nor closing parenthesis, it is added to temp.
// Finally, the function returns the reversed string.
// The time complexity of this solution is O(n), where n is the length of the input string s.
// The space complexity is also O(n) due to the stack used to store characters inside the parentheses.
// The code is given below:

class Solution {
public:
    string reverseParentheses(string s) {
        stack<string> st;
        string temp;

        for(char c : s) {
            if(c == '(') {
                st.push(temp);
                temp.clear();
            }
            else if(c == ')') {
                reverse(temp.begin(),temp.end());
                temp = st.top() + temp;
                st.pop();
            }
            else {
                temp += c;
            }
        }
        return temp;
    }
};