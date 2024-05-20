// Approach : Concept of masking the array members 
// for example : Take an array [2,3,5,8] => (1,0,1,0)
// provide a mask to these arrays such that we traverse from 1-> 2^4
// here the mask is given and corresponfing to the mask the given array multiplies 
// ex : 2,3,5,8 == 0 0 0 1   count+=8
//      2,3,5,8 == 0 0 1 0   count+=5
//      .
//      .
//      .
//      . . . . . . . . 

class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
        int n= nums.size();
        int count = 0;
        for(int i=1;i<(1<<n);i++) {
            int curr_total = 0;
            for(int j = 0; j< n;j++) {
                if(i & (1<<j)) curr_total ^= nums[j];
            }
            count += curr_total;
        }
        return count;
    }
};