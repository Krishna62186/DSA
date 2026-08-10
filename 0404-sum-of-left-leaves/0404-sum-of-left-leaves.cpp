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
    int issum(TreeNode* root , bool isleft){
        if(root == nullptr)return 0;
        if(isleft && root->left == nullptr && root->right == nullptr){
            return root->val;
        }
        int leftsum = issum(root->left ,true);
        int rightsum = issum(root->right , false);
        return leftsum + rightsum;
    }
    int sumOfLeftLeaves(TreeNode* root) {
        return issum (root , false);
    }
};