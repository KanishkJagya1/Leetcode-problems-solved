// Solution:
// This code implements the in-order traversal of a binary search tree to get the elements in sorted order.
// We then build a balanced binary search tree using the sorted elements.
// The in-order traversal of a binary search tree gives the elements in sorted order.
// We use this property to get the elements in sorted order.
// We then build a balanced binary search tree using the sorted elements.
// The idea is to find the middle element of the sorted elements and make it the root of the tree.
// We then recursively build the left and right subtrees using the elements to the left and right of the middle element respectively.
// We return the root of the balanced binary search tree.
// The time complexity of this solution is O(n) where n is the number of elements in the binary search tree.
// The space complexity is O(n) where n is the number of elements in the binary search tree.
// This is because we are storing the elements in a vector to build the balanced binary search tree.
// The space complexity can be reduced to O(log n) by using the two-pointer approach to find the middle element of the sorted elements.

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* balanceBST(TreeNode* root) {
        vector<int> sortedElements;
        inOrderTraversal(root,sortedElements);
        return buildBalancedBST(sortedElements,0,sortedElements.size() - 1);
    }

private:
    void inOrderTraversal(TreeNode* node, vector<int>& sortedElements) {
        if(!node) {
            return;
        }
        inOrderTraversal(node->left,sortedElements);
        sortedElements.push_back(node->val);
        inOrderTraversal(node->right,sortedElements);
    }

    TreeNode* buildBalancedBST(const vector<int>& elements,int start,int end) {
        if(start > end) {
            return nullptr;
        }
        int mid = start + (end - start)/2;
        TreeNode* node = new TreeNode(elements[mid]);
        node->left = buildBalancedBST(elements,start,mid-1);
        node->right = buildBalancedBST(elements,mid+1,end);
        return node;
    }
};