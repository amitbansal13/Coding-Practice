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
     else if(!a || !b) {
         return 0;
     }
     else {
        return a->val == b ->val && check(a->left, b->left) && check(a->right, b->right);
     }
 }
int Solution::isSameTree(TreeNode* A, TreeNode* B) {
    return check(A,B);
}