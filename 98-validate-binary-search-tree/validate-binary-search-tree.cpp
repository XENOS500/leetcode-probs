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
    void DFS(TreeNode* node,stack<int> &st,bool &flag)
    {   if(node==NULL) return ;
        DFS(node->left,st,flag);
        if(st.empty()||st.top()<node->val)
        {
            st.push(node->val);
        }
        else if(st.top()>=node->val) flag=false;
        DFS(node->right,st,flag);

    }
    bool isValidBST(TreeNode* root) {
        if(root->left==NULL && root->right==NULL) return true;
        TreeNode* node=root;
        stack<int> st;
        bool flag=true;
        DFS(root,st,flag);
        
        return flag;
    }
};