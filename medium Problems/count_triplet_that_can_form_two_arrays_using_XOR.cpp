// First Approach ==> Big O(N^3)

// for i to n-1
//     for j to n-1
//         initialize a as arr[i] XOR arr[i+1] XOR ... arr[j-1]
//         for k to n-1
//             initialize b as arr[j] XOR arr[j+1] XOR .... arr[k]
//             if( a==b ) 
//                 count++
// return count

class Solution {
public:
    int countTriplets(vector<int>& arr) {
        int count = 0;
        int n = arr.size();
        for(int i = 0;i<n;i++) {
            for(int j = i+1;j<n;j++) {
                int a = 0;
                for(int k = i;k<j;k++) {
                    a ^= arr[k];
                }
                int b = 0;
                for(int k = j;k<n;k++) {
                    b^=arr[k];
                    if(a==b) {
                        count++;
                    }
                }
            }
        }
        return count;
    }
};


// Optimized approach with big O(n^2)

