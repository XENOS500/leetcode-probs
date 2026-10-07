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
    vector<int> ans;
    void DFS(TreeNode* node)
    {   if(node==nullptr) return ;
        ans.push_back(node->val);
        DFS(node->left) ;
        DFS(node->right);
    }
    int kthSmallest(TreeNode* root, int k) {
        DFS(root);
        sort(ans.begin(),ans.end());
        return ans[k-1];
    }
};