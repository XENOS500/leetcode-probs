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
    void checker(TreeNode* node,vector<int> &org,int &i){
        if(node==NULL) return ;
        checker(node->left,org,i);
        if(node->val!=org[i]) node->val=org[i];
        i++;
        checker(node->right,org,i);
    }
    void dfs(TreeNode* node,vector<int> &ans)
    {   if(node==NULL) return ;
        dfs(node->left,ans);
        ans.push_back(node->val);
        dfs(node->right,ans);
    }
    void recoverTree(TreeNode* root) {
        vector<int> ans;
        dfs(root,ans);
        sort(ans.begin(),ans.end());
        int cnt=0;
        checker(root,ans,cnt);
    }
};