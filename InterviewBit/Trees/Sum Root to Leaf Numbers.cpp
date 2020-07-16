/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 int m = 1003;
 int sum(TreeNode* A, int currSum) {
    if(!A)return 0;
    if(!A->left && !A->right) {
        return ((currSum*10)%m + A->val)%m;
    }
 }
int Solution::sumNumbers(TreeNode* A) {
    if(!A)return 0;
    int sum = A->val%1003;
    int left = (sum*10 + sumNumbers(A->left)%1003)%1003;
    int right = (sum*10 + sumNumbers(A->right)%1003)%1003;
    return (left+right)%1003;
}
