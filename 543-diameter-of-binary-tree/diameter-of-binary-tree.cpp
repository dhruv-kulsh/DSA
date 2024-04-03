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
    int height(TreeNode *root){
        if(root == NULL) return 0;
        int left = height(root->left);  
        int right = height(root->right);
        int maxi = max(left, right) + 1;
        return maxi;
    }
public:
    int diameterOfBinaryTree(TreeNode* root) {
        int maxi = INT_MIN;
        if(root == NULL) return 0;
        int left = diameterOfBinaryTree(root->left);
        int right = diameterOfBinaryTree(root->right);
        int lh = height(root->left);
        int rh = height(root->right);
        int h = lh + rh;
        maxi = max(right, max(h,left));

        return maxi;
    }
};