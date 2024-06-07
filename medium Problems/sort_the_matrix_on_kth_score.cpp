// Use a comparator function for sorting that will sort the matrix based on the highest score of students in kth exam
// this is based on the number K such that we have to go o the column E(k)
// then sort the rows (students) based on the highest marks in E(k) column

class Solution {
public:
    vector<vector<int>> sortTheStudents(vector<vector<int>>& score, int k) {

        auto cmp = [&](vector <int> a , vector <int> b){

            if (a[k] > b[k]){
                return true ;
            }

            return false;
        };

        sort(score.begin(),score.end(),cmp);

        return score;
        
    }
};