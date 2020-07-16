/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::mergeTwoLists(ListNode* A, ListNode* B) {
    ListNode* temp = new ListNode(0), *head;
    head = temp;
    while(A && B) {
        if(A->val<B->val) {
            temp->next = A;
            A = A->next;
        }
        else {
            temp->next = B;
            B = B->next;
        }
        temp=temp->next;
    }
    while(A) {
        temp->next = A
    }
}
