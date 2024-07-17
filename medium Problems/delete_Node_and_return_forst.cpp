// Solution:
// Date: 2021-07-26
// Notes: This is a good problem to understand the concept of recursion and how to delete a node from a tree. The main idea is to use a set to store the values of the nodes that need to be deleted. Then we can use a recursive function to traverse the tree and delete the nodes that need to be deleted. If the current node is in the set, we can add its left and right children to the result vector and set the current node to NULL. Finally, we can add the root node to the result vector if it is not NULL. The time complexity is O(n) and the space complexity is O(n) as well.


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
private:
    vector<TreeNode*> res;
    unordered_set<int>st;
    void deleteNode(TreeNode* &root) {
        if(root) {
            deleteNode(root->left);
            deleteNode(root->right);
            if(st.find(root->val) != st.end()) {
                if(root->left) res.push_back(root->left);
                if(root->right) res.push_back(root->right);
                root = NULL;
            }
        }
    }
public:
    vector<TreeNode*> delNodes(TreeNode* root, vector<int>& to_delete) {
        for(int i = 0; i < to_delete.size(); i++) {
            st.insert(to_delete[i]);
        }
        deleteNode(root);
        if(root) res.push_back(root);
        return res;
    }
};