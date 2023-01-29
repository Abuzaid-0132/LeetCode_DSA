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
    
    ListNode* reverse_list(ListNode* head){
        
        ListNode* curr = head;
        ListNode* prev = NULL;
        
        while(curr!=NULL){
            
            ListNode* temp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = temp;
            
        }
        
        return prev;
    }
    
    
    
    ListNode* removeNthFromEnd(ListNode* head, int n){
        
        ListNode * start = new ListNode();
        start -> next = head;
        ListNode* fast = start;
        ListNode* slow = start;     

        for(int i = 1; i <= n; ++i)
            fast = fast->next;
    
        while(fast->next != NULL) {
            
            fast = fast->next;
            slow = slow->next;
        }
        
        slow->next = slow->next->next;
        
        return start->next;
    }
};