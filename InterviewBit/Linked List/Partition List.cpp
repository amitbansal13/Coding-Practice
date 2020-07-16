/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::partition(ListNode* A, int B) {
    ListNode* less = new ListNode(0), *head1;
    ListNode* geq = new ListNode(0), * head2;
    head1=less, head2 = geq;
    while(A) {
        if(A->val<B) {
            less->next = A;
            less=less->next;
        }
        else {
            geq->next = A;
            geq = geq->next;
        }
        A = A->next;
    }
    geq->next = NULL;
    less->next = head2->next;
    return head1->next;
}
