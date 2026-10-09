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
    TreeNode* insertNode(TreeNode* root, int value)
    {
        if(root==nullptr) return new TreeNode(value);
        if(value<root->val) {
            root->left=insertNode(root->left,value);
        }
        else if(value>root->val) {
            root->right=insertNode(root->right,value);
        }
        return root;
    }
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        TreeNode* root = new TreeNode(preorder[0]);
        for(int value:preorder){
            root=insertNode(root,value);
        }
        return root;
    }
};