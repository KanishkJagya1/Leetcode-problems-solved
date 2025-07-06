#include<bits/stdc++.h>
using namespace std;

unordered_map<int,vector<int>> create_list(int n, vector<vector<int>> edgelist) {
    unordered_map<int,vector<int>> mp;
    for(int i = 0 ; i < n ; i++) {
        int a = edgelist[i][0];
        int b = edgelist[i][1];
        mp[a].push_back(b);
        mp[b].push_back(a);
    }
    return mp;
}

int main() {
    int n;
    cin >> n;
    vector<vector<int>> edgelist(n, vector<int>(2));

    for(int i = 0  ; i < n ; i++) {
        cin >> edgelist[i][0] >> edgelist[i][1] ;
    }

    unordered_map<int,vector<int>> adj_list = create_list(n, edgelist);
    for(auto &p : adj_list) {
        cout << p.first << " ";
        for(int i = 0 ; i < p.second.size() ; i++) {
            cout << p.second[i] << " ";
        }
        cout << endl;
    }
    return 0;
}