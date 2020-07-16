/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 int is(TreeNode* a) {
    if(!a)return 0;
    int left = is(a->left);
    int right = is(a->right);
    if(left == -1 || right == -1 || abs(left-right)>1) return -1;
    return max(left, right) + 1;
 }
int Solution::isBalanced(TreeNode* A) {
    return is(A)>0;
}