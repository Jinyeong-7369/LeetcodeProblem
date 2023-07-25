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
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(root==NULL) return 0;
        int tmp = getPathSub(root, targetSum);
        if(tmp == 0 && hasNoChild(root)) return 1;
        else return hasPathSum(root->left, tmp) || hasPathSum(root->right, tmp);
    }
    int getPathSub(TreeNode* root, int targetSum)
    {
        return targetSum - (root->val);
    }
    bool hasNoChild(TreeNode* root)
    {
        return (root->right == NULL && root->left == NULL);
    }
};
