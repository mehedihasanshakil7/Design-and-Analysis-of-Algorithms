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
    int maxDepth(TreeNode* root) {
        if(!root) {
            return 0;
        }
        queue<TreeNode*> q, aux_q;
        q.push(root);
        int count = 0;
        while(!q.empty()) {
            TreeNode* ptr = q.front();
            q.pop();
            if(ptr->left) {
                aux_q.push(ptr->left);
            }
            if(ptr->right) {
                aux_q.push(ptr->right);
            }
            if(q.empty()) {
                count++;
                swap(q, aux_q);
            }
        }
        return count;
    }
};