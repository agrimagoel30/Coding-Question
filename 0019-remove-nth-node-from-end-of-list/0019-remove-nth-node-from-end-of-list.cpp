/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode*temp=head;
        if(head->next==NULL)
        return NULL;
        int c=0;
        while(temp!=NULL){
            c++;
            temp=temp->next;
        }
        int diff=c-n;
        ListNode*a=head;
    for(int i=1;i<diff;i++){
        a=a->next;

    }
    if(n==c)
    return head->next;
    a->next=a->next->next;
    return head;
    }
};