//Solution:
// This code implements the solution to find all ancestors in an acyclic graph.
// The idea is to maintain a graph of the ancestors of each node in the graph.
// We iterate through the edges of the graph and update the ancestors of each node.
// We then sort the ancestors of each node and return the result.

// The time complexity of this solution is O(n) where n is the number of edges in the graph.
// The space complexity is O(n) where n is the number of nodes in the graph.
// This is because we are using a vector to store the ancestors of each node in the graph.
// The space complexity can be reduced to O(1) by using a variable to store the ancestors of each node.
// The time complexity remains the same.


// The code is as follows:

class Solution {
public:
    vector<vector<int>> getAncestors(int n, vector<vector<int>>& edges) {
        vector<vector<int>> res(n);
        vector<vector<int>> graph(n);
        
        for (const auto& edge : edges) {
            graph[edge[0]].push_back(edge[1]);
        }
        
        for (int i = 0; i < n; ++i) {
            vector<bool> visit(n, false);
            dfs(graph, i, i, res, visit);
        }
        
        for (int i = 0; i < n; ++i) {
            sort(res[i].begin(), res[i].end());
        }
        
        return res;
    }

private:
    void dfs(vector<vector<int>>& graph, int parent, int curr, vector<vector<int>>& res, vector<bool>& visit) {
        visit[curr] = true;
        for (int dest : graph[curr]) {
            if (!visit[dest]) {
                res[dest].push_back(parent);
                dfs(graph, parent, dest, res, visit);
            }
        }
    }
};