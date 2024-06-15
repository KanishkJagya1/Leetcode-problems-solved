---
title: "TREE PART 1"
author: "Kanishk Jagya"
date: "2024-06-14"
---


# LOWEST COMMON ANCESTOR OF A BINARY TREE

## 236. Lowest Common Ancestor of a Binary Tree
- Given a binary tree, find the lowest common ancestor (LCA) of two given nodes in the tree.

- According to the definition of LCA on Wikipedia: “The lowest common ancestor is defined between two nodes p and q as the lowest node in T that has both p and q as descendants (where we allow a node to be a descendant of itself).”

-   ![Alt Text][1]

    [1]: https://afteracademy.com/images/lca-of-binary-tree-example2-a42f5b48898c146d.png

    ### CODE for LOWEST COMMON ANCESTOR of a BINARY TREE
    ```
        /**
        * Definition for a binary tree node.
        * struct TreeNode {
        *     int val;
        *     TreeNode *left;
        *     TreeNode *right;
        *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
        * };
        */
        class Solution {
        public:
            TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
                // Base case
                if (root == NULL) return NULL;

                // If either p or q is the root, then root is the LCA
                if (root->val == p->val || root->val == q->val) {
                    return root;
                }

                // Recur for the left and right subtrees
                TreeNode* leftAns = lowestCommonAncestor(root->left, p, q);
                TreeNode* rightAns = lowestCommonAncestor(root->right, p, q);

                // If both subtrees return non-null, it means p and q are found in
                // different subtrees, so root is the LCA
                if (leftAns != NULL && rightAns != NULL) {
                    return root;
                }

                // Otherwise, check if left subtree or right subtree is the LCA
                return (leftAns != NULL) ? leftAns : rightAns;
            }
        };

    ```