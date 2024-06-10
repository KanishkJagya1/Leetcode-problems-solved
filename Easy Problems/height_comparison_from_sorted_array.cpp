class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int n = heights.size();
        vector<int> temp(n);
        for(int i = 0 ; i < n ; i++ ) {
            temp[i] = heights[i];
        }
        sort(temp.begin(),temp.end());
        int count = 0;
        for(int i = 0 ; i < n ; i++ ) {
            if(temp[i] != heights[i]) count++;
        }
        return count;
    }
};