/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::swapPairs(ListNode* A) {
    if(A == NULL || A->next == NULL) {
        return A;
    }
    ListNode *prev = NULL, *curr = A,*temp, *next, *head;
    while(curr && curr->next) {
        next = curr->next->next;
        temp = curr->next;
        if(prev == NULL){
            prev = curr;
            head = curr->next;
        }
        else prev->next = curr->next;
        curr->next = next;
        temp->next = curr;
        prev = curr;
        curr = next;
    }
    return head;
}
