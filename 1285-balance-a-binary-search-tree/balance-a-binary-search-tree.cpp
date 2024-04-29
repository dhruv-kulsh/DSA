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
    void inorder(TreeNode* root, vector<int>&inorderval){
        if(root == NULL) return;
        inorder(root->left, inorderval);
        inorderval.push_back(root->val);
        inorder(root->right, inorderval);
    }

    TreeNode* inordertoBST(int s, int e, vector<int>inorderval)
    {
        if(s > e){
            return NULL;
        }
        int m = s + (e-s)/2;
        TreeNode* newnode = new TreeNode(inorderval[m]);
        newnode->left = inordertoBST(s, m-1, inorderval);
        newnode->right = inordertoBST(m+1, e, inorderval);
        return newnode;
    }

public:
    TreeNode* balanceBST(TreeNode* root) {
        vector<int>inorderval;
        inorder(root, inorderval);

        return inordertoBST(0, inorderval.size()-1, inorderval);

    }
};