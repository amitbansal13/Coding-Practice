/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
TreeNode* Solution::flatten(TreeNode* A) {
    if(!A)return A;
    if(!A->left && !A->right)return A;
    TreeNode* left = A->left, *temp;
    TreeNode* right = A->right;
    left = flatten(left);
    right = flatten(right);
    temp = left;
    while(temp->right)temp=temp->right;
    temp->right = right;
    A->right = left;
    A->left = NULL;
    return A;
}
