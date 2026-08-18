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

// class Solution {
//     void bfs(vector<vector<int>> &res,int level,TreeNode* root){
//         if(!root) return ;
//         if(res.size() <= level) res.push_back({});
//         res[level].push_back(root->val);
//         bfs(res,level+1,root->left);
//         bfs(res,level+1,root->right);
//     }
// public:
//     vector<vector<int>> levelOrder(TreeNode* root) {
//         vector<vector<int>> res;
//         bfs(res,0,root);
//         return res;
//     }
// };
class Solution {

public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> res;
          if(!root) return res;
        TreeNode * temp =root;
        queue<TreeNode*> q;
        q.push(temp);
        while(!q.empty()){
            vector<int> level;
            int size = q.size();
            
            for(int i=0; i<size;i++){
                TreeNode* t=q.front();
                q.pop();
                 if (t) {
                    level.push_back(t->val);
                    q.push(t->left);
                    q.push(t->right);
                }
            }
            if (!level.empty()) {
                res.push_back(level);
            }     
         }
        return res;
    }
};
