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
    void traverse(TreeNode* root, unordered_map<int, int> m, int &count) {
        if(!root)   return;
        m[root->val]++;
        if(!root->left and !root->right) {
            int countOdds = 0;
            for(auto it=m.begin(); it!=m.end(); it++) {
                countOdds += (*it).second % 2;
                if(countOdds > 1)   return;
            }
            if(countOdds <= 1)   count++;
        }
        traverse(root->left, m, count);
        traverse(root->right, m, count);
    }
    int pseudoPalindromicPaths (TreeNode* root) {
        if(!root)   return 0;
        unordered_map<int, int> m;
        int count = 0;
        traverse(root, m, count);
        return count;
    }
};
