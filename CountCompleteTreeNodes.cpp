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
    int count;
    int countNodes(TreeNode* root) {
        if (root == NULL) return 0;
        count = 1;
        traverse(root);
        return count;
    }
    void traverse(TreeNode* root)
    {
        if (root == NULL) return;
        int childCount = getChildCount(root);
        count += childCount;
        if (childCount < 2)
        {
            return;
        }
        traverse(root->left);
        traverse(root->right);

    }
    int getChildCount(TreeNode* root)
    {
        if (root->left == NULL && root->right == NULL) return 0;
        else if (root->left != NULL && root->right != NULL) return 2;
        else return 1;
    }
};