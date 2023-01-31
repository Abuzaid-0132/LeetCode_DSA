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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2){
        
        if(l1 == NULL)
            return(l2);
        
        if(l2 == NULL)
            return(l1);
        
        ListNode* ptr1 = l1;
        ListNode* ptr2 = l2;
        
        ListNode* prev = NULL;
        
        while(ptr1 != NULL && ptr2 != NULL){
            
            if(ptr1->val < ptr2->val){
                
                if(prev == NULL)
                    prev = ptr1;
                
                else{
                    
                    prev->next = ptr1;
                    prev = ptr1;
                }
                
                ptr1 = ptr1->next;
            }
            
            else{
                
                if(prev == NULL)
                    prev = ptr2;
                
                else{
                    
                    prev->next = ptr2;
                    prev = ptr2;
                }
                
                ptr2 = ptr2->next;
            }
        }
        
        if(ptr1 != NULL)
            prev->next = ptr1;
        
        else
             prev->next = ptr2;
        
        
        if(l1->val < l2->val)
            return(l1);
        
        else
             return(l2);
        
    }
};