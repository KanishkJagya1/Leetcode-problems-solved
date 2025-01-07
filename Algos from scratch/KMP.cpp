#include <bits/stdc++.h>
#include <vector>
#include <string>
using namespace std;

vector<int> buildLPS(string& pattern) {
    vector<int> lps(pattern.size(), 0);
    int len = 0;
    int i = 1;

    while(i < pattern.size()) {
        if(pattern[i] == pattern[len]) {
            len++;
            lps[i] = len;
            i++;
        } else {
            if(len != 0) {
                len = lps[len - 1];
            } else {
                lps[i] = 0;
                i++;
            }
        }
    }

    return lps; 
}

void KMPSearch(string text, string pattern) {
    vector<int> lps = buildLPS(pattern);

    int i = 0;  // text pointer
    int j = 0;  // pattern pointer

    while(i < text.length()) {
        if(pattern[j] == text[i]) {
            j++;
            i++;
        }
        
        if(j == pattern.length()) {
            cout << "Pattern found at index " << i - j << endl;
            j = lps[j - 1];
        }
        else if(i < text.length() && pattern[j] != text[i]) {
            if(j != 0) {
                j = lps[j - 1];
            } else {
                i++;
            }
        }
    }
}

int main() {
    string text = "aaaaaaaab";
    string pattern = "aaab";
    
    // No need to create KMP object since functions are not in a class
    KMPSearch(text, pattern);
    
    return 0;
}