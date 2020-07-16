/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::deleteDuplicates(ListNode* A) {
    if(!A)return A;
    ListNode* temp = new ListNode(0), *head;
    head =temp;
    temp->next = A;
    temp=temp->next;
    while(A){
        if(temp->val !=A->val) {
            temp->next = A;
            temp = temp->next;
        }
        A = A->next;
    }
    temp->next = NULL;
    return head->next;
}