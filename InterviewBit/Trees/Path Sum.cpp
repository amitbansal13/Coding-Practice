/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
int Solution::hasPathSum(TreeNode* A, int B) {
    if(!A) {
        return 0;
    }
    if(!A->left && !A->right) {
        return A->val == B;
    }
    return hasPathSum(A->left, B-A->val) || hasPathSum(A->right, B - A->val);
}
