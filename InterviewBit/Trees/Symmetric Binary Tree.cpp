
/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 int check(TreeNode* a, TreeNode* b) {
    if(!a && !b) {
        return 1;
    }
    else if(a && b) {
        return a->val == b->val && check(a->left, b->right) && check(a->right, b->left);
    }
    return 0;
 }
int Solution::isSymmetric(TreeNode* A) {
    if(!A)return 1;
    return check(A->left, A->right);
}