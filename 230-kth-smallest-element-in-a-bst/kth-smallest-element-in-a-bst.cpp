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
    void solve(TreeNode*root, int &ans, int &cnt,int k){
        if(root == NULL) return;

        solve(root->left, ans, cnt, k);
        cnt++;
        if(cnt == k){
            ans = root->val;
            return;
        } 
        solve(root->right, ans, cnt, k);

    }
public:
    int kthSmallest(TreeNode* root, int k) {
        int ans;
        int i = 0;
        solve(root, ans, i, k);
        return ans;
    }
};