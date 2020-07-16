/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 void paths(TreeNode* a, int b,vector<int> &temp, vector<vector<int>> &ans) {
    if(!a){
        return;
    }
    
    if(!a->left && !a->right && b == 0) {
        ans.push_back(temp);
    }
    if(!a->left) {
        temp.push_back(a->left->val);
        paths(a->left, b - a->left->val, temp, ans);
        temp.pop_back();
    }
    if(!a->right) {
        temp.push_back(a->right->val);
        paths(a->right, b - (a->right->val), temp, ans);
        temp.pop_back();
    }
 }
vector<vector<int> > Solution::pathSum(TreeNode* A, int B) {
    vector<vector<int>> ans;
    if(!A){
        return ans;
    }
    vector<int> temp;
    temp.push_back(A->val);
    paths(A,B-A->val, temp, ans);
    return ans;
}
