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
    void traverse(TreeNode* root, vector<int>&vec){
        if(root == NULL) return;
        traverse(root->left, vec);
        vec.push_back(root->val);
        traverse(root->right, vec);
    }
public:
    bool findTarget(TreeNode* root, int k) {
        vector<int>vec;
        traverse(root, vec);
        int i = 0;
        int j = vec.size() -1;
        while (i < j){
            if(vec[i] + vec[j] == k){
                return true;
            }
            else if(vec[i] + vec[j] < k){
                i++;
            }
            else j--;
        }
        return false;
    }
};