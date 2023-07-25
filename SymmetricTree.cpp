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
    vector<int> comVec1;
    vector<int> comVec2;
    bool isSymmetric(TreeNode* root) {
        //divide by Two
        TreeNode* left = root->left;
        TreeNode* right = root->right;
        travelLeft(left);
        travelRight(right);
        return comVec1 == comVec2;
    }
    void travelLeft(TreeNode* left)
    {
        if(left == NULL)
        {
            comVec1.push_back(101);
            return;
        }
        comVec1.push_back(left->val);
        travelLeft(left->left);
        travelLeft(left->right);
    }
    void travelRight(TreeNode* right)
    {
        if(right == NULL)
        {
            comVec2.push_back(101);
            return;
        }
        comVec2.push_back(right->val);
        travelRight(right->right);
        travelRight(right->left);
    }
};