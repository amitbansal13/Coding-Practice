/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::deleteDuplicates(ListNode* A) {
    if(A == NULL || A->next == NULL)return A;
    bool flag = false;
    ListNode* head = new ListNode(0);
    ListNode* temp = head;
    while(A) {
        flag = false;
        while(A && A->next && A->val == A->next->val) {
            flag = true;
            A = A->next;
        }
        if(!flag) {
            temp->next = A;
            temp = temp->next;
        }
        A = A->next;
    }
    temp->next = NULL;
    return head->next;
}
