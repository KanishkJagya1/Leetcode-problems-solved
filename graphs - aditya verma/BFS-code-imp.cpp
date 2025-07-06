#include <bits/stdc++.h>
using namespace std;

unordered_map<int, vector<int>> create_list(vector<vector<int>> &list) {
    unordered_map<int, vector<int>> mp;
    for (int i = 0; i < list.size(); i++) {
        int a = list[i][0];
        int b = list[i][1];
        mp[a].push_back(b);
        mp[b].push_back(a); // Since it's undirected
    }
    return mp;
}

void dfs(int node, unordered_map<int, vector<int>> &adjList, unordered_map<int, bool> &visited) {
    cout << node << " ";
    visited[node] = true;
    for (int &p : adjList[node]) {
        if (!visited[p]) {
            dfs(p, adjList, visited);
        }
    }
}

int main() {
    int n;
    cin >> n; // number of edges

    vector<vector<int>> edgelist(n, vector<int>(2));
    for (int i = 0; i < n; i++) {
        cin >> edgelist[i][0] >> edgelist[i][1];
    }

    unordered_map<int, vector<int>> mp = create_list(edgelist);

    int node;
    cout << "Enter the start node: " << endl;
    cin >> node;

    unordered_map<int, bool> visit;
    dfs(node, mp, visit);

    return 0;
}
