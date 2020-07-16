/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
 typedef ListNode* l;
ListNode* Solution::rotateRight(ListNode* A, int B) {
    l temp = A;int count = 0;
    while(temp) {
        temp = temp->next;
        count++;
    }
    temp = A;
    B = B%count;
    while(B--) {
        temp = temp->next;
    }
    l temp1 = A;
    while(temp->next) {
        temp = temp->next;
        temp1 = temp1->next;
    }
    temp->next = A;
    l head = temp1->next;
    temp1->next = NULL;
    return head;
}
