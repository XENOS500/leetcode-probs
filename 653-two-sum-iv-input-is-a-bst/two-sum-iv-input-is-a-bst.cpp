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
    void dfs(TreeNode* node,vector<int> &ans)
    {
        if(node==NULL) return ;
        dfs(node->left,ans);
        ans.push_back(node->val);
        dfs(node->right,ans);
    }
    bool findTarget(TreeNode* root, int k) {
        vector<int> ans;
        dfs(root,ans);
        int start=0,end=ans.size()-1;
        while(start<end)
        {   if(ans[start]+ans[end]==k) return true;
            else if(ans[start]+ans[end]>k) end--;
            else if(ans[start]+ans[end]<k) start++;
        }
        return false;
    }
};