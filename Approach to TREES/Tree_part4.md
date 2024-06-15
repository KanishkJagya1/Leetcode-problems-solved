---
title: "TREE PART 1"
author: "Kanishk Jagya"
date: "2024-06-14"
---


# Kth ANCESTOR OF A BINARY TREE

## CODE for Kth ANCESTOR OF A BINARY TREE
```
        #include <iostream>
        using namespace std;

        class TreeNode {
        public:
            int data;
            TreeNode* left;
            TreeNode* right;
            TreeNode(int data) {
                this->data = data;
                left = NULL;
                right = NULL;
            }
        };

        // Function to build the example tree
        TreeNode* buildTree() {
            TreeNode* root = new TreeNode(1);
            root->left = new TreeNode(2);
            root->right = new TreeNode(3);
            root->left->left = new TreeNode(4);
            root->left->right = new TreeNode(5);
            return root;
        }

        // Helper function to find the k-th ancestor
        bool kthAncestorHelper(TreeNode* root, int& k, int p, int& ancestor) {
            // Base case
            if (root == NULL) {
                return false;
            }

            if (root->data == p) {
                return true;
            }

            // Check in left and right subtrees
            bool leftAns = kthAncestorHelper(root->left, k, p, ancestor);
            bool rightAns = kthAncestorHelper(root->right, k, p, ancestor);

            // If the node is found in either subtree
            if (leftAns || rightAns) {
                k--;
                if (k == 0) {
                    ancestor = root->data;
                    return false;  // To stop further backtracking
                }
                return true;
            }
            return false;
        }

        // Function to find the k-th ancestor
        int kthAncestor(TreeNode* root, int k, int p) {
            int ancestor = -1;  // To store the k-th ancestor
            kthAncestorHelper(root, k, p, ancestor);
            return ancestor;
        }

        int main() {
            TreeNode* root = buildTree();

            int k = 1;
            int p = 4;
            int ancestor = kthAncestor(root, k, p);

            if (ancestor != -1) {
                cout << "The " << k << "-th ancestor of node " << p << " is: " << ancestor << endl;
            } else {
                cout << "The " << k << "-th ancestor of node " << p << " does not exist." << endl;
            }

            return 0;
        }
```

![Alt Text][1]

[1]: https://i.ytimg.com/vi/oib-XsjFa-M/maxresdefault.jpg?sqp=-oaymwEmCIAKENAF8quKqQMa8AEB-AHUBoAC4AOKAgwIABABGGMgZSg0MA8=&rs=AOn4CLDfezkPBCtaND7H55SE3QdVg1fmFQ

![Alt Text][2]

[2]: https://zxi.mytechroad.com/blog/wp-content/uploads/2020/06/1483-ep336-1.png