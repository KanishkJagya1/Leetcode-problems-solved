// Solution:
// Date: 2021-07-25 12:00:00
// The intersection function takes two vectors of integers nums1 and nums2 as input and returns a vector of integers containing the intersection of the two vectors.
// The function initializes an unordered map mpp to store the elements of nums1.
// The function also initializes a vector ans to store the intersection of nums1 and nums2.
// The function iterates through each element in nums1 and stores it in the map mpp.
// The function then iterates through each element in nums2 and checks if it is present in mpp.
// If the element is present, it is added to the ans vector, and the element is removed from mpp to avoid duplicates.
// Finally, the function returns the ans vector containing the intersection of nums1 and nums2.
// The time complexity of this solution is O(n + m), where n and m are the lengths of nums1 and nums2, respectively.
// The space complexity is O(n) due to the unordered map used to store the elements of nums1.
// The code is given below:

class Solutio{
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,bool> mpp;
        vector<int> ans;
        for(int i=0;i<nums1.size();i++){
            mpp[nums1[i]]=true;
        }
        for(int i=0;i<nums2.size();i++){
            if(mpp[nums2[i]]){
                ans.push_back(nums2[i]);
                mpp[nums2[i]]=false;
            }
        }
        return ans;
    }
};