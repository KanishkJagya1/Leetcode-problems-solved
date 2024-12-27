class Solution {
public:
    int maxScoreSightseeingPair(vector<int>& values) {
        // This solution gave a Time limit exceeded error
        // for(int i = 0 ; i < values.size() ; i++) {
        //     for(int j = i+1 ; j < values.size() ; j++) {
        //         max_score = max(max_score,values[j] + values[i] + i - j);
        //     }
        // }

        // This is the optimal solution where we donot have to reexamine each value of the array and store it deifferently
        // int n = values.size();
        // int maxScore = 0;
        // vector<int> maxLeftScore(n);
        // maxLeftScore[0] = values[0];
        // for(int i = 1; i < n ; i++ ) {
        //     int currentRightScore = values[i] - i;
        //     maxScore = max(maxScore,maxLeftScore[i - 1] + currentRightScore);
        //     int currentLeftScore = values[i] + i;
        //     maxLeftScore[i] = max(maxLeftScore[i - 1],currentLeftScore);
        // }
        // return maxScore;


        // More easy solution (all about observation)
        int ans = 0;
        int a = values[0];
        for(int i = 1; i < values.size() ; i++) {
            a--;
            int b = values[i];
            ans = max(ans,a+b);
            a = max(a,b);
        }
        return ans;
    }
};