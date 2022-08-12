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
    ListNode* reverseKGroup(ListNode* head, int k) {
        
        if(head == NULL)
            return NULL;
        
        int i=0;
        
        ListNode* temp = head;
        while(temp!=NULL){
            i++;
            temp = temp->next;
        }
        
        if(i<k){
            return head;
        }
        
        i=0;
        
        ListNode* curr = head;
        ListNode* prev = NULL;
        ListNode* next = NULL;
        
        while(curr!=NULL && i<k){
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
            if(curr!=NULL)
            i++;
        }
        
        if(curr!=NULL)
        head->next = reverseKGroup(curr,k);
        
        return prev;
    }
};