
// I have used the approach to compare using two pointer and make the second pointer static on the longest subsequence
// Then subtract the subsequence length from the second string's length in order to obtain the final result
class Solution {
public:
    int appendCharacters(string s, string t) {
        int i=0,j=0;
        while(i<s.size() && j<t.size())
        {
            if(s[i]==t[j]) {
                j++;
            }
            i++;
        }
        return t.size() - j;
    }
};