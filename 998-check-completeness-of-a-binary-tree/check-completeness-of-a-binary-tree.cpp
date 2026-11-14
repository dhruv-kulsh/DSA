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

    int sizeOfCBT(TreeNode* root){
        if(root == NULL) return 0;

        return 1 + sizeOfCBT(root->left) + sizeOfCBT(root->right);
    }

    bool checkCBT(TreeNode* root, int size, int i){
        if(root == NULL) return true;

        if(i >= size) return false;        
        return checkCBT(root->left, size, 2*i+1) &&
        checkCBT(root->right, size, 2*i+2);

        return true;

    }
public:
    bool isCompleteTree(TreeNode* root) {
        if(root == NULL) return true;

        int size = sizeOfCBT(root);

        return checkCBT(root, size, 0);

    }
};