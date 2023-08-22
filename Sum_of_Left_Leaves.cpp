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
    int sumOfLeftLeaves(TreeNode* root, bool isLeft = 0) {
        if(root == NULL)
        {
            return 0;
        }
        isLeft = isLeft & (root->left == NULL) & (root->right == NULL);
        if(isLeft)
        {
            return root->val;
        }
        else
        {
            return sumOfLeftLeaves(root->right, 0) + sumOfLeftLeaves(root->left, 1);
        }

        
    }
};