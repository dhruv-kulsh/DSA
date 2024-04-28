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
        map<int, int>mp;
        bool found = false;
        for(int i = 0; i < vec.size(); i++){
            int to_find = k - vec[i];
            if(mp.find(to_find) == mp.end())
            {
                mp[vec[i]] = i;
            }
            else{
                found = true;
            }
        }
        if(found) return true;
        return false;
    }
};