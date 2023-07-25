class My_TreeNode
{
public:
    My_TreeNode* right;
    My_TreeNode* left;
    bool haveMiddle;
    int val;
};

class BST
{
public:
    My_TreeNode* root;
    BST()
    {
        root = NULL;
    }
    void insert(My_TreeNode*& root, int val)
    {
        if(root == NULL)
        {
            root = new My_TreeNode;
            root->right = NULL;
            root->left = NULL;
            root->val = val;
            root->haveMiddle = 0;
        }
        else if(root->val == val)
        {
            if(root->haveMiddle)
            {
                return;
            }
            else
            {
                root->haveMiddle = 1;
            }
        }
        else if(root->val < val)
        {
            insert(root->right, val);
        }
        else
        {
            insert(root->left, val);
        }
    }
    int findNoMiddle(My_TreeNode* root)
    {
        if(root == NULL) return INT_MIN;
        else if(!(root->haveMiddle))
        {
            return root->val;
        }
        else
        {
            return max(findNoMiddle(root->left), findNoMiddle(root->right));
        }
    }
};
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        BST treeForSolve;
        for(int n : nums)
        {
            treeForSolve.insert(treeForSolve.root, n);
        }
        return treeForSolve.findNoMiddle(treeForSolve.root);
    }
    
};
