We have to replace the "derivaative" word with the "root" word in the given question
The simpe intuition was at first to use the string parsing into substring and then checking from a an unordered set if the root word for that word exists in the dict.
If the substring of the word is found in the dictionary then we replace the derivative with the root word

class Solution {
public:
    string replaceWords(vector<string>& dictionary, string sentence) {
        unordered_set<string> s(dictionary.begin(),dictionary.end());

        istringstream iss(sentence);  // use this function to parse the sentence
        vector<string> temp;  // temporary vector to store the string
        string word,res;      // res is for the end sentence result and the word as an iterator

        while(iss>>word) temp.push_back(word);
        for(string t : temp) {
            int i =0;
            while(i++ <= t.length()) {
                string curr = t.substr(0,i);    // store the substring in the curr variable
                if(s.find(curr) != s.end()) {    // compare form the set curr and the parsed word from the sentence
                    res += curr + " ";     // if found then append the result with the root word 
                    break;
                }

                if(i==t.length()) res += curr + " "; // if not found the word in the setence then put the word exactly into res
            }
        }
        res.erase(res.size()-1);   // erase extra memory and space
        return res;  // return the end sentence (with the root words)
    }
};  