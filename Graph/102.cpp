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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> result;
        vector<int> v;
        if(root == NULL) {
            return result;
        }
        queue<TreeNode*> q, aux_q;
        q.push(root);
        while(!q.empty()) {
            TreeNode* ptr = q.front();
            v.push_back(ptr->val);
            q.pop();
            if(ptr->left != NULL) {
                aux_q.push(ptr->left);
            }
            if(ptr->right != NULL) {
                aux_q.push(ptr->right);
            }
            if(q.empty()) {
                result.push_back(v);
                v.clear();
                swap(q, aux_q);
            }
        }
        return result;        
    }
};