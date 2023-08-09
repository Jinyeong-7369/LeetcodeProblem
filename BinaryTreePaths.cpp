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
    vector<string> ans;
    vector<string> binaryTreePaths(TreeNode* root, string path = "") {
        if (root == NULL)
        {
            return ans;
        }
        if (path.empty())
        {
            path.append(to_string(root->val));
        }
        else
        {
            path.append("->" + to_string(root->val));
        }
        if (root->left == NULL && root->right == NULL)
        {
            ans.push_back(path);
        }
        else
        {
            binaryTreePaths(root->left, path);
            binaryTreePaths(root->right, path);
        }
        return ans;
    }
};