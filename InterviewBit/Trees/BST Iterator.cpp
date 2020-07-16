/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
TreeNode* r;
stack<TreeNode*> s;
BSTIterator::BSTIterator(TreeNode *root) {
    r=root;
}

/** @return whether we have a next smallest number */
bool BSTIterator::hasNext() {
    if(r==NULL && s.empty()) {
        return false;
    }
    return true;
}

/** @return the next smallest number */
int BSTIterator::next() {
    while(r) {
        s.push(r);
        r = r->left;
    }
    r = s.top();s.pop();
    int val = r->val;
    r = r->right;
    return val;
}

/**
 * Your BSTIterator will be called like this:
 * BSTIterator i = BSTIterator(root);
 * while (i.hasNext()) cout << i.next();
 */
