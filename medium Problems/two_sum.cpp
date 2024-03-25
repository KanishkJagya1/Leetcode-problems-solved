class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        unordered_map<int, int> hashmap; // Value -> Index map
        vector<int> answer;

        // Iterate through the numbers
        for (int i = 0; i < numbers.size(); i++) {
            int complement = target - numbers[i];
            
            // Check if the complement exists in the hashmap
            if (hashmap.find(complement) != hashmap.end()) {
                // If found, return the indices
                answer.push_back(hashmap[complement]);
                answer.push_back(i+1);
                return answer;
            }
            
            // Otherwise, add the current number to the hashmap
            hashmap[numbers[i]] = i+1;
        }

        // Return an empty vector if no solution is found
        return answer;
    }
};