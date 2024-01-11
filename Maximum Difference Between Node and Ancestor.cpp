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
    void preorder(TreeNode* root, int mini, int maxi, int &diff){
        if(!root)return;

        mini = min(mini, root->val);
        maxi = max(maxi, root->val);

        diff = max(diff, maxi - mini);

        preorder(root->left, mini, maxi, diff);
        preorder(root->right, mini, maxi, diff);
    }
    int maxAncestorDiff(TreeNode* root) {
        int mini = root->val;
        int maxi = root->val;

        int diff = 0;

        preorder(root,mini,maxi, diff);

        return diff;
    }
};