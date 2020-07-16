/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
 typedef ListNode* l;
 l rev(l head) {
     l prev = NULL, curr=head, next;
     while(curr) {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr=next;
     }
     return prev;
 }
ListNode* Solution::reorderList(ListNode* A) {
    if(!A || !A->next || !A->next->next)return A;
    l prev = NULL, curr = A, next = A, temp1 = A;
    while(next && next->next) {
        prev = curr;
        curr = curr->next;
        next = next->next->next;
    }
    // cout<<prev->val<<" "<<curr->val<<"\n";
    prev->next = NULL;
    curr = rev(curr);
    // cout<<curr->val<<"\n";
    l head = A, temp = new ListNode(0), next1;
    temp1 = temp;
    while(head && curr) {
        next = head->next; next1=curr->next;
        temp->next = head;
        temp->next->next = curr;
        temp = temp->next->next;
        head = next;
        curr = next1;
    }
    if(head) {
        temp->next = head;
        head->next=NULL;
    }
    else if(curr) {
        temp->next = curr;
        curr->next = NULL;
    }
    else temp->next = NULL;
    return temp1->next;
}
