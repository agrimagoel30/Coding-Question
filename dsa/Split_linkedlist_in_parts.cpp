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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        int n = 0;
        ListNode* a= head;
        while (a!=NULL) {
            a=a->next;
            n++;
        }
        vector<ListNode*>ans(k,NULL);
        int size = n / k;
        int rem = n % k;
        ListNode* curr=head;
       for(int i=0;i<k && curr!=NULL;i++){
        ans[i]=curr;
        int curr_size=size+(i<rem?1:0);
        for(int i=1;i<curr_size;i++){
            curr=curr->next;
        }
        if(curr!=NULL){
        ListNode* temp=curr->next;
        curr->next=NULL;
        curr=temp;
        }
       }
        return ans;
    }
};