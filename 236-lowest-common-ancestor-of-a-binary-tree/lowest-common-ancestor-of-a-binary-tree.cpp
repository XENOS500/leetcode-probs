/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    bool findPath(TreeNode* node,TreeNode* target,vector<TreeNode*>&path)
    {
        if(node==nullptr) return false;
        path.push_back(node);
        if(node==target) return true;
        if(findPath(node->left,target,path)||findPath(node->right,target,path))         return true;
        path.pop_back();
        return false;
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        vector<TreeNode*> pathP,pathQ;
        findPath(root,p,pathP);
        findPath(root,q,pathQ);
        TreeNode* lca= nullptr;
        int limit=min(pathP.size(),pathQ.size());
        for(int i=0;i<limit;i++)
        {
            if(pathP[i]!=pathQ[i]) break;
            lca= pathP[i];
        }
        return lca;
    }
};