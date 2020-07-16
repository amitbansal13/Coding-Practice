/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
 typedef ListNode* l;
ListNode* Solution::reverseBetween(ListNode* A, int B, int C) {
    
    l temp = A, prev = NULL, curr = A, next;B--;C-=B;
    while(B--) {
        prev = temp;
        temp = temp->next;
    }
    l prev1 = prev;
    prev=NULL;
    curr = temp;
    while(C--) {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    if(prev1) {
        // l temp = prev1->next;
        prev1->next = prev;
        temp->next = next;
        return A;
    }
    else if(temp) {
        temp->next = next;
    }
    return prev;
}
