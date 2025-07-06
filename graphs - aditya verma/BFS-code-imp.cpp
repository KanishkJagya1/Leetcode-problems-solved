#include <iostream>
#include <bits/stdc++.h>

using namespace std;

unordered_map<int,vector<int>> create_list(vector<vector<int>> edgelist) {
    unordered_map<int,vector<int>> mp;
    for(int i = 0 ; i < edgelist.size() ; i++) {
        int a = edgelist[i][0],b = edgelist[i][1];
        mp[a].push_back(b);
        mp[b].push_back(a);
    }
    for(auto &p : mp) {
        cout << p.first << " ";
        for(int i = 0 ; i < p.second.size() ; i++) {
            cout << p.second[i] << " ";
        }
        cout << "\n";
    }
    return mp;
}

void BFS(unordered_map<int,vector<int>> mp,int start) {
    unordered_map<int,bool> visited;
    queue<int> q;
    q.push(start);
    visited[start] = true;
    
    cout << "BFS Traversal: ";
    while(!q.empty()) {
        int node = q.front();
        q.pop();
        cout << node << " ";
        for(auto &p : mp[node]) {
            if(!visited[p]) {
                visited[p] =  true;
                q.push(p);
            }
        }
    }
    cout << "\n";   
}


int main() {
    // input for the nodes;
    int n;
    cin >> n; // number of edges
    vector<vector<int>> edgelist(n,vector<int> (2));
    for(int i = 0 ; i < n ; i++) {
        cin >> edgelist[i][0];
        cin >> edgelist[i][1];
    }
    unordered_map<int,vector<int>> mp = create_list(edgelist);
    int st;
    cout << "Enter the start node:";
    cin >> st;
    BFS(mp,st);
    return 0;
}