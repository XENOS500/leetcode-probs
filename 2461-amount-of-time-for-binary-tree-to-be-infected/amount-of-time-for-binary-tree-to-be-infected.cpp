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
     int amountOfTime(TreeNode* root, int start) {
        map<TreeNode*,TreeNode*> mpp; 
        TreeNode* target=parents(root,start,mpp);
        int ans=findmax(mpp,target);
        return ans;
    }
    int findmax(map<TreeNode*,TreeNode*> &mpp,TreeNode* res)
    {   if (!res) return 0;
        int maxi=0;
        map<TreeNode*, int> vis;
        vis[res]=1;
        queue<TreeNode*>q;
        q.push(res);
        while(!q.empty())
        {   int flag=0;
            int sz=q.size();
            for(int i=0;i<sz;i++)
            {
                 TreeNode* node=q.front();
                    q.pop();
                    if(node->left&&!vis[node->left])
                    {   
                        flag=1;
                        q.push(node->left);
                        vis[node->left]=1;
                    }
                    if(node->right&&!vis[node->right])
                    {
                        flag=1;
                        q.push(node->right);
                        vis[node->right]=1;
                    }
                    if(mpp[node]&&!vis[mpp[node]])
                    {
                        flag=1;
                        q.push(mpp[node]);
                        vis[mpp[node]]=1;
                    } 
                }
                if(flag) maxi++;
            }
        return maxi;
        
    }
    TreeNode* parents(TreeNode* root, int start,map<TreeNode*,TreeNode*>&mpp)
    {   if (!root) return nullptr;
        queue<TreeNode*> q;
        q.push(root);
        TreeNode* res;
        while(!q.empty())
        {
            TreeNode* node=q.front();
            q.pop();
            if(node->val==start) res=node;
            if(node->left)
            {
                mpp[node->left]=node;
                q.push(node->left);
            }
            if(node->right)
            {
                mpp[node->right]=node;
                q.push(node->right);
            }
        }
        return res;
    }
   
};