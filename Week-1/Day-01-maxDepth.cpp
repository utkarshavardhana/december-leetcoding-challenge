/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    
    void _maxdepth(TreeNode* node, int depth, int &mx) {
        if(!node)   return;
        if(depth > mx)  mx = depth;
        _maxdepth(node->left, depth+1, mx);
        _maxdepth(node->right, depth+1, mx);
    }
    
    int maxDepth(TreeNode* root) {
        int mx = 0;
        if(!root)   return mx;
        _maxdepth(root, 1, mx);
        return mx;
    }
};
