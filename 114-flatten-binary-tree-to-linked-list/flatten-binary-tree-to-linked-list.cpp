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
    void DFS(TreeNode* node, TreeNode* &ans)
    {
        if(node==NULL) return;
        ans->right= new TreeNode(node->val);
        ans=ans->right;
        DFS(node->left,ans);
        DFS(node->right,ans);
    }
    void flatten(TreeNode* root) {
        if(root==nullptr) return;
        TreeNode* dummy=new TreeNode(-1);
        TreeNode* curr=dummy;
        
        DFS(root,curr);
        root->left=NULL;
        root->right=dummy->right->right;
    }
};