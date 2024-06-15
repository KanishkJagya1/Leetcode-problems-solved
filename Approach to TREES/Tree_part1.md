---
title: "TREE PART 1"
author: "Kanishk Jagya"
date: "2024-06-14"
---

# DIFFERENCE BETWEEN COMPLETE AND BALANCED BINARY TREE

## Balanced Binary Tree
- Calculate the height of right and left subtree
- At any node of the given binary tree there should be no point where the absolute difference of the right and left subtree is greater than 1 
- Therefore |(height of right subtree) - (height of left subtree)| <=1

    ### Code for BALANCED BINARY TREE
    ```
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
            int height(TreeNode* root) {
                if(root==NULL) return 0;

                int leftHeight = height(root->left);
                int rightHeight = height(root->right);
                int ans = 1 + max(rightHeight,leftHeight);
                return ans;
            }
            bool isBalanced(TreeNode* root) {
                //Base case
                if(root==NULL) return true;

                //1 case
                int leftHeight = height(root->left);
                int rightHeight = height(root->right);
                int diff = abs(rightHeight - leftHeight);
                bool ans1 = (diff <= 1);

                //Recursion
                bool leftAns = isBalanced(root->left);
                bool rightAns = isBalanced(root->right);

                if(leftAns && rightAns && ans1) 
                    return true;
                else 
                    return false;
            }
        };

    ```


    ![Alt Text][1]

    [1]: https://media.geeksforgeeks.org/wp-content/uploads/20220612212939/UntitledDiagramdrawio-660x371.png

## Complete Binary Tree
- It is not similiar to that of the Balanced Binary tree.
- All the nodes in this subtree is filled from left to right
    ### Code for COMPLETE BINARY TREE
    ```
    class Solution {
            public:            
                bool isCompleteTree(TreeNode* root) {
                    if (!root) return true;

                    queue<TreeNode*> q;
                    q.push(root);
                    bool end = false;

                    while (!q.empty()) {
                        TreeNode* node = q.front();
                        q.pop();

                        if (!node) {
                            end = true;
                        } else {
                            if (end) return false;
                            q.push(node->left);
                            q.push(node->right);
                        }
                    }

                    return true;
                }
            };
    ```

    ![Alt Text][3]

    [3]: https://iq.opengenus.org/content/images/2022/07/Perfect-Binary-Tree-1.png


## Note :
- The below picture shows the types of binary tree

    ![Alt Text][2]

    [2]: https://miro.medium.com/v2/resize:fit:16000/1*CMGFtehu01ZEBgzHG71sMg.png
