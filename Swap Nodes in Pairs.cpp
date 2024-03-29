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
    ListNode* swapPairs(ListNode* head) {
        if(head == NULL || head->next == NULL){
            return head;
        }
        ListNode* a = head;ListNode*b = head->next;
        ListNode* temp = b->next;
        b->next=a;
        a->next = temp;
        ListNode* res = b;
        b = a->next;
        while(b!=NULL&&b->next!=NULL){
            a->next = b->next;
            b->next = a->next->next;
            a->next->next = b;
            b = b->next;
            a = a->next->next;
        }
        return res;
    }
};
