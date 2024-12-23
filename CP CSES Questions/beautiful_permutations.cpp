#include <iostream>
#include <vector>
#include <string.h>

using namespace std;

void beautifulPermutation(int n) {
    // Base cases
    if(n==1) {
        cout << "1\n";
        return;
    }
    if(n==2) {
        cout << "NO SOLUTION\n";
        return;
    }
    
    if(n==3) {
        cout << "NO SOLUTION\n";
        return;
    }
    
    vector<int> result;
    
    for(int i = 2 ; i <= n; i+=2) {
        result.push_back(i);
    }
    for(int i = 1 ; i <= n ; i+=2) {
        result.push_back(i);
    }
    for(int num : result) {
        cout << num << " ";
    }
    cout << "\n";
}

int main() {
    int n;
    cin>>n;
    beautifulPermutation(n);
    return 0;
}