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
    void mode(TreeNode* root , unordered_map<int , int> &mp){
        if(root == nullptr)return ;
        mp[root->val]++;
        mode(root->left , mp);
        mode(root->right , mp);
    }
    vector<int> findMode(TreeNode* root) {
        unordered_map<int , int> mp;
        if(root == nullptr)return {};
        mode(root , mp);
        int maxfrequency =0;
        for(auto it:mp){
            maxfrequency  = max(maxfrequency , it.second);
        }
        vector<int>ans;
        for(auto it:mp){
            if(maxfrequency == it.second){
                ans.push_back(it.first);
            }
        }
        return ans;
        

    }
};