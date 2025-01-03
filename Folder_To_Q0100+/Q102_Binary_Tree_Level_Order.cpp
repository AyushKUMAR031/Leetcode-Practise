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
    void solve(TreeNode* root,vector<vector<int>>& ans){
        if(root == NULL) return;
        queue<TreeNode*> q;
        q.push(root);

        while(!q.empty()){
            int levelsize = q.size();
            vector<int> currentlevel;


            for(int i=0;i<levelsize;i++){
                TreeNode* curr = q.front();
                q.pop();

                currentlevel.push_back(curr->val);

                if(curr->left != nullptr) q.push(curr->left);
                if(curr->right != nullptr) q.push(curr->right);
            }
            ans.push_back(currentlevel);
        }
    }
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        solve(root,ans);
        return ans;
    }
};
