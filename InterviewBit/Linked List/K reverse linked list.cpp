/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
 typedef ListNode* l;
ListNode* Solution::reverseList(ListNode* A, int B) {
    if(!A)return A;
    l prev = NULL, curr = A, next;
    int b = B;
    while(B--) {
        next = curr->next;
        curr->next=prev;
        prev = curr;
        curr=next;
    }
    A->next = reverseList(next,b);
    return prev;
}
