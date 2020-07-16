/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
vector<int> Solution::inorderTraversal(TreeNode* A) {
    vector<int> ans;
    stack<TreeNode*> s;
    s.push(A);
    while(!s.empty()){
        while(A->left) {
            s.push(A->left);
            A=A->left;
        }
        A = s.top();s.pop();
        ans.push_back(A->val);
        if(A->right){
            A=A->right;
            s.push(A);
        }
    }
    return ans;
}
