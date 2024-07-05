// Solution:
// Date: 2021-07-25 12:00:00
// Two pointers, prev and curr, are initialized to point to the head and the next node of the linked list, respectively. An integer variable index is initialized to 1 to keep track of the indices of the nodes.
// A while loop is used to iterate through the linked list until the end of the list is reached. The loop checks if the current node is a critical point by comparing its value with the previous and next nodes. If the current node is a critical point, its index is added to the criticalpoint vector.
// If the number of critical points is less than 2, the function returns {-1, -1} as there are not enough critical points to calculate the distances.
// The minimum and maximum distances between the critical points are calculated by finding the minimum and maximum differences between consecutive critical points in the criticalpoint vector.
// The minimum and maximum distances are returned as the result.
// The time complexity of this solution is O(n), where n is the number of nodes in the linked list. The space complexity is O(1) as no extra space is used apart from the criticalpoint vector, which has a maximum size of n/2.
// The code is given below:

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        // No base case required
        vector<int> criticalpoint;
        ListNode* prev = head;
        ListNode* curr = head->next;
        int index = 1;

        while(curr && curr->next) {
            if((curr->val > curr->next->val && curr->val > prev->val) || (curr->val < curr->next->val && curr->val < prev->val)) {
                criticalpoint.push_back(index);
            }
            prev = curr;
            curr = curr->next;
            index++;
        }

        if(criticalpoint.size() < 2) {
            return {-1,-1};
        }

        int minDistance = INT_MAX;
        for(int i = 1; i < criticalpoint.size() ; i++) {
            minDistance = min(minDistance,criticalpoint[i] - criticalpoint[i-1]);
        }
        int maxDistance = criticalpoint.back() - criticalpoint.front();

        return {minDistance, maxDistance};
    }
};