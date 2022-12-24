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
    
    ListNode* reverse_list(ListNode* curr) {
        
        ListNode* prev = NULL;
        
        while(curr != NULL) {
            
            ListNode* temp = curr->next;
            curr->next = prev;
            
            prev = curr;
            curr = temp;
            
        }
        return prev;
    }
    
    int find_length(ListNode* root) {
        
        int len = 0;
        
        while(root != NULL) {
            
            len++;
            root = root->next;
            
        }
        return len;
    }
    
    
    void reorderList(ListNode* root) {
        
        int len = find_length(root);
        
        ListNode* mid = root;
        
        for(int i=0; i<(len-1)/2; i++)
            mid = mid->next;
        
        ListNode* head2 = mid->next;
        mid->next = NULL;
        
        head2 = reverse_list(head2);
        
        ListNode* ptr1 = root;
        ListNode* ptr2 = head2;
        
        while(ptr1 && ptr2) {
            
            ListNode* temp1 = ptr1->next;
            ListNode* temp2 = ptr2->next;
            
            ptr1->next = ptr2;
            ptr2->next = temp1;
            
            ptr1 = temp1;
            ptr2 = temp2;
            
        }
        
    }
};