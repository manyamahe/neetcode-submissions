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
    int balance(TreeNode* root ,bool& ans){
        if(root==nullptr){
            return 0;
        }
        int leftnode=balance(root->left,ans);
        int rightnode=balance(root->right,ans);
        if(abs(rightnode-leftnode)>1){
            ans=false;
        }
        return 1+max(leftnode,rightnode);
    }
    bool isBalanced(TreeNode* root) {
        if(root==nullptr)return true;
        bool ans=true;
        balance(root, ans);
        return ans;
    }
};
