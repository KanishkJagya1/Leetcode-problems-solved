class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        vector<int> count(2,0);
        for(int student:students) {
            count[student]++;
        }

        int remaining = sandwiches.size();
        for(int sandwich : sandwiches) {
            if(count[sandwich] == 0) {
                break;
            }
            if(remaining == 0) {
                break;
            }
            count[sandwich]--;
            remaining--;
        }

        return remaining;
    }
};