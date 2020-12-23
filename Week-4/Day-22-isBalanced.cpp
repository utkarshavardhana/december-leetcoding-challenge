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
    bool flag=true;
    int postOrder(TreeNode* root){
        if(!root) return 0;
        int left=0,right=0;
        left+=postOrder(root->left);
        right+=postOrder(root->right);
        if(abs(left-right)>1)
            flag=false;
        return max(left,right)+1;
        
    }
    bool isBalanced(TreeNode* root) {
        postOrder(root);
        return flag;   
    }
};
