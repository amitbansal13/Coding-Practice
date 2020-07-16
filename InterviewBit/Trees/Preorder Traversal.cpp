/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
vector<int> Solution::preorderTraversal(TreeNode* A) {
    vector<int> ans;
    stack<TreeNode*> s;
    s.push(A);
    while(!s.empty()) {
        A = s.top();s.pop();
        if(A->right) {
           s.push(A->right); 
        }
        if(A->left) {
            s.push(A->left);
        }
        ans.push_back(A->val);
    }
    return ans;
}
