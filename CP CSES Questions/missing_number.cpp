#include<bits/stdc++.h>
#include<string>
#include<iostream>


using namespace std;

int main() {
    int n;
    cin>>n;
    int result = 0;
    for(int i = 0; i < n ; i++) {
        result = result ^ (i+1);
    }
    
    for(int i = 0 ; i < n-1 ; i++) {
        int temp;
        cin>>temp;
        result = result ^ temp;
    }
    cout<<result;
}