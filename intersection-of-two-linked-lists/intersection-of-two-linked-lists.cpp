/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *head1, ListNode *head2) {
        
        ListNode* temp1 = head1;
        int len1 = 0;
        
        while(temp1 != NULL){
            
            len1++;
            temp1 = temp1->next;
        }
        
        ListNode* temp2 = head2;
        int len2 = 0;
        
        while(temp2 != NULL){
            
            len2++;
            temp2 = temp2->next;
        }
        
        int diff = abs(len1 - len2);
        
        temp1 = head1;
        temp2 = head2;
        
        if(len1 > len2) {
            
            while(diff > 0) {
                
                temp1 = temp1->next;
                diff--;
            }
            
        }
        else{
            
            while(diff > 0) {
                
                temp2 = temp2->next;
                diff--;
            }
        }
        
        while(temp1 != NULL && temp2 != NULL) {
            
            if(temp1 == temp2)
                break;
            
            temp1 = temp1->next;
            temp2 = temp2->next;
            
        }
        return temp1;
    }   
};      
