#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> create_matrix(int n, vector<vector<int>> edgelist) {
    vector<vector<int>> matrix(n, vector<int>(n, 0));
    for(int i = 0 ; i < n ; i++) {
        int a = edgelist[i][0];
        int b = edgelist[i][1];
        matrix[a][b] = 1;
        matrix[b][a] = 1;
    }
    return matrix;
}

int main() {
    int n;
    cin >> n;
    vector<vector<int>> edgelist(n, vector<int>(2));

    for(int i = 0  ; i < n ; i++) {
        cin >> edgelist[i][0] >> edgelist[i][1] ;
    }

    vector<vector<int>> adj_matrix = create_matrix(n, edgelist);
    for(int i = 0 ; i < n ; i++) {
        for(int j = 0 ; j < n ; j++) {
            cout << adj_matrix[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}