/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
 typedef ListNode* l;
 l rev(l curr) {
     l prev = NULL, next = NULL, temp = curr;
     while(temp) {
        next = temp->next;
        temp->next = prev;
        prev = temp;
        temp=next;
    }
    return prev;
 }
ListNode* Solution::addTwoNumbers(ListNode* A, ListNode* B) {
    l curr = new ListNode(0), temp;
    temp = curr;
    int sum = 0, carry = 0;
    while(A && B){
        sum = A->val + B->val +carry;
        carry = sum/10;
        sum = sum%10;
        cout<<sum<<"\n";
        temp->next = new ListNode(sum);
        A = A->next;
        B = B->next;
        temp = temp->next;
    }
    while(A) {
        sum = A->val +carry;
        carry = sum/10;
        sum = sum%10;
        temp->next = new ListNode(sum);
        A = A->next;
        temp = temp->next;
    }
    while(B) {
        sum = B->val +carry;
        carry = sum/10;
        sum = sum%10;
        temp->next = new ListNode(sum);
        B = B->next;
        temp = temp->next;
    }
    if(carry!=0) {
        temp->next = new ListNode(carry);
    }
    temp = curr;
    while(temp) {
        cout<<temp->val<<" ";
        temp = temp->next;
    }
    cout<<"\n";
    curr = rev(curr->next);
    while(curr && curr->val==0) {
        curr = curr->next;
    }
    curr = rev(curr);
    return curr;
}
