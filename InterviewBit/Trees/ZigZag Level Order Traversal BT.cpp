/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
vector<vector<int> > Solution::zigzagLevelOrder(TreeNode* A) {
    vector<vector<int>> vec;
    if(!A) {
        return vec;
    }
    queue<TreeNode*> q;
    q.push(A);
    bool flag = false;
    while(!q.empty()) {
        int n =q.size();
        vector<int> ans;
        for(int i=0;i<n;i++) {
            TreeNode* t = q.front();q.pop();
            ans.push_back(t->val);
            if(t->left)q.push(t->left);
            if(t->right)q.push(t->right);
        }
        if(flag) {
            for(int i=0;i<ans.size()/2;i++) {
                swap(ans[i], ans[ans.size()-i-1]);
            }
            flag=!flag;
        }
        // ans.push_back(an)
        vec.push_back(ans);
    }
    return vec;
}
