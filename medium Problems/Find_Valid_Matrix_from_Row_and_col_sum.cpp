// Solution:
// Date: 2021-07-26

class Solution {
public:
    vector<vector<int>> restoreMatrix(vector<int>& rowSum, vector<int>& colSum) {
        int n = rowSum.size();
        int m = colSum.size();

        vector<vector<int>> result(n,vector<int>(m));

        for(int i = 0 ; i < n ; i++) {
            for(int j = 0 ; j < m ; j++) {
                result[i][j] = min(rowSum[i],colSum[j]);
                rowSum[i] = rowSum[i] - result[i][j];
                colSum[j] = colSum[j] - result[i][j];
            }
        }

        return result;
    }
};