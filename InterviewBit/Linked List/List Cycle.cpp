/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
 typedef ListNode* l;
ListNode* Solution::detectCycle(ListNode* A) {
    l hare = A, tort = A;
    bool flag = true;
    while(hare && hare->next) {
        hare=hare->next->next;
        if(hare==tort) {
            flag = false;
            break;
        }
        tort = tort->next;
    }
    if(flag)return NULL;
    int count = 1; hare = hare->next;
    while(hare!=tort) {
        hare=hare->next;
        count++;
    }
    hare = A; tort = A;
    while(count--) {
        tort = tort->next;
    }
    while(hare!=tort) {
        hare = hare->next;
        tort = tort->next;
    }
}
