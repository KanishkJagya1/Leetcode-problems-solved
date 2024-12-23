#include <iostream>
#include <string.h>
#include <vector>
using namespace std;

int minMovesToMakeIncreasing(vector<int> n) {
    int moves = 0;
    for(int i = 1 ; i < n.size() ; i++) {
        if(n[i] < n[i-1]) {
            moves += n[i-1] - n[i];
            n[i] = n[i-1];
        }
    }
    return moves;
}

int main() {
    int n;
    cin>>n;
    cout<< "\n";
    vector<int> arr(n);
    for(int i = 0 ; i < n ; i++) {
        cin>>arr[i];
    }
    
    cout<<minMovesToMakeIncreasing(arr);

    return 0;
}