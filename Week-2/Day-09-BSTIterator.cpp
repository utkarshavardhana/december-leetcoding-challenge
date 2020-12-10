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
class BSTIterator {
    vector<int> res;
    int pos;
public:
    void traverse(TreeNode* root, vector<int> &res) {
        if(!root)   return;
        traverse(root->left, res);
        res.push_back(root->val);
        traverse(root->right, res);
    }
    BSTIterator(TreeNode* root) {
        traverse(root, res);
        pos = 0;
    }
    
    /** @return the next smallest number */
    int next() {
        return (pos < res.size()) ? res[pos++] : -1;
    }
    
    /** @return whether we have a next smallest number */
    bool hasNext() {
        return pos < res.size();
    }
};

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */
