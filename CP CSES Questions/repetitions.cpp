#include<iostream>
#include<string>
using namespace std;

int main() {
    string s;
    cin>>s;

    int max_length = 1, current_length = 1;
    char previous_char = s[0];

    for (int i = 1; i < s.length(); ++i) {
        if (s[i] == previous_char) {
            current_length++;
        } else {
            max_length = max(max_length, current_length);
            current_length = 1;
            previous_char = s[i];
        }
    }
    max_length = max(max_length, current_length);

    cout << max_length;
}