//Solution:
// This code implements the solution to find the center of a star graph.
// The idea is to maintain a map to keep track of the frequency of each node in the graph.
// We iterate through the edges of the graph and update the frequency of each node.
// We then find the node with the highest frequency and return it as the center of the star graph.
// The time complexity of this solution is O(n) where n is the number of edges in the graph.
// The space complexity is O(n) where n is the number of nodes in the graph.
// This is because we are using a map to store the frequency of each node in the graph.
// The space complexity can be reduced to O(1) by using a variable to store the node with the highest frequency.
// The time complexity remains the same.
// The code is as follows:
class Solution {
public:
    int findCenter(vector<vector<int>>& edge) {
        // return e[0][0] == e[1][0] || e[0][0] == e[1][1] ? e[0][0] : e[0][1];

        unordered_map<int,int> mp;
        for(auto e : edge) {
            mp[e[0]]++;
            mp[e[1]]++;
        }

        int node = -1;
        int freq = -1;
        for(const auto& pair:mp) {
            if(pair.second > freq) {
                freq = pair.second;
                node = pair.first;
            }
        }
        return node;
    }
};