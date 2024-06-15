---
title: "TREE PART 1"
author: "Kanishk Jagya"
date: "2024-06-14"
---


# CONVERT A TREE INTO SUM TREE

## What is a SUM TREE ?
- Each node of the tree has some value corresponding to it
- We need to replace each node of the tree with the corresponding sum of currentNode->value and leftsubtree->value and rightsubtree->value
- Therefore the newNode->value = (currentNode->value + leftSubTree->value + rightSubTree->value)

    ### Code for CONVERTING A BINARY TREE to CORRESPONDING SUM TREE
    ```
        #include<iostream>
        using namespace std;

        int convertIntoSumTree(TreeNode* root) {
            //Base case
            if(root==NULL) {
                return 0;
            }

            int leftSubTree = convertIntoSumTree(root->left);
            int rightSubTree = convertIntoSumTree(root->right);
            
            root->value = root->value + leftSubTree + rightSubTree;

            return root->value;
        }
    ```

    ![Alt Text][1]

    [1]: https://www.techiedelight.com/wp-content/uploads/SumTree.png