//Solution:
// This code implements the solution to find the intersection of two arrays.
// The idea is to sort both arrays and then iterate through them to find the common elements.
// We maintain two pointers i and j to iterate through the two arrays.
// If the elements at the two pointers are equal, we add the element to the result and increment both pointers.
// If the element at the first pointer is less than the element at the second pointer, we increment the first pointer.
// If the element at the first pointer is greater than the element at the second pointer, we increment the second pointer.
// The time complexity of this solution is O(nlogn) where n is the number of elements in the arrays.
// The space complexity is O(1) as we are using a constant amount of space.

// The code is as follows:

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        int i=0;
        int j=0;
        while(i<nums1.size() and j<nums2.size()){
            if(nums1[i]==nums2[j]){
                ans.push_back(nums1[i]);
                i++;
                j++;
            }
            else if(nums1[i]<nums2[j]){
                i++;
            }
            else{
                j++;
            }
        }
        return ans;
        // vector<int> result;
        // unordered_map<int,int> count;

        // for(int num : nums1) {
        //     count[num]++;
        // }

        // for(int num : nums2) {
        //     if(count[num]>0) {
        //         result.push_back(num);
        //         count[num]--;
        //     }
        // }
        // return result;
    }
};