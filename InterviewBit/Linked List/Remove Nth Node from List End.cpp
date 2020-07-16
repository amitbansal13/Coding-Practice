/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::removeNthFromEnd(ListNode* A, int B) {
    if(!A)return A;
    ListNode* temp = A, *prev = NULL, *curr = A;
    while(B-- && temp) {
        temp = temp->next;
        cout<<B<<"\n";
    }
    if(temp == NULL) {
        return A->next;
    }
    while(temp) {
        prev = curr;
        cout<<temp->val<<" "<<curr->val<<"\n";
        curr = curr->next;
        temp = temp->next;
    }
    if(prev)
        prev->next = curr->next;
    else A = A->next;
    return A;
}
