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
  int c=0;

    void dfs(TreeNode *root,int m){
        if(!root) return;
        if(root->val >= m) c++;
        m=max(m,root->val);
        dfs(root->left,m);
        dfs(root->right,m);
        m=max(m,root->val);

    }
public:
    int goodNodes(TreeNode* root) {
        dfs(root,-100);
        return c;
    }
};
