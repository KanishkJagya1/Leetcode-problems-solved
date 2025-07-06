#include <iostream>
#include <bits/stdc++.h>

using namespace std;


void dfs(int node, unordered_map<int,vector<int>> &adj_list, unordered_map<int,bool> visited, vector<int> &ans) {
    cout << node << " ";
    visited[node] = true;
    
    for(auto neighbour : adj_list[node]) {
        if(!visited[neighbour]) {
            dfs(neighbour, adj_list, visited, ans);
        }
    }
}

int main() {
    int n;
    cout << "Enter the number of nodes: ";
    cin >> n;

    int m;
    cout << "Enter the number of edges: ";
    cin >> m;

    unordered_map<int,vector<int>> adj_list;
    for(int i = 0; i < m; i++) {
        int u, v;
    }

    unordered_map<int,bool> visited;
    vector<int> ans;

    for(int i = 0; i < n; i++) {
        if(!visited[i]) {
            dfs(i, adj_list, visited, ans);
        }
    }

    return 0;
    cout << "The DFS traversal of the graph is: ";
    for(int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
    cout << endl;
    return 0;   
}