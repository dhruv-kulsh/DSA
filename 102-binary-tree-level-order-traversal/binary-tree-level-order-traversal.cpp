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
    void traverse(TreeNode* root, vector<vector<int>>&ans){
        queue<TreeNode*>q;
        q.push(root);
        q.push(NULL);
        vector<int>temp;

        while(!q.empty())
        {
            TreeNode* front = q.front();
            q.pop();
           
            if(front == NULL)
            {
                if(!q.empty())
                {
                    ans.push_back(temp);
                    q.push(NULL);
                    temp.clear();
                }
                else
                {
                    ans.push_back(temp);
                }
                
            }
            if(front != NULL)
            {
                int val = front->val;
                temp.push_back(val);
                if(front->left) q.push(front->left);
                if(front->right) q.push(front->right);
            }

        }
    }
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        
        vector<vector<int>>ans;
        if(root == NULL) return ans;
        traverse(root, ans);
        return ans;
    }
};