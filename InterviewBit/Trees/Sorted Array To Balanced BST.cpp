/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 TreeNode* build(const vector<int> & arr, int start, int end) {
     if(start>end) return NULL;
     if(start == end){
         return new TreeNode(arr[start]);
     }
     int mid = (start+end)/2;
     TreeNode* root = new TreeNode(arr[mid]);
     root->left = build(arr, start, mid-1);
     root->right = build(arr, mid+1, end);
     return root;
 }
TreeNode* Solution::sortedArrayToBST(const vector<int> &A) {
    return build(A, 0, A.size()-1);
}