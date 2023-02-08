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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        
        if(headA == NULL || headB == NULL)
            return NULL;
        
        ListNode* h1 = headA;
        ListNode* h2 = headB;
        
        unordered_set<ListNode*> set;
        
        while(h1 != NULL) {
            
            set.insert(h1);
            h1 = h1->next;
            
        }
        
        while(h2 != NULL) {
            
            if(set.find(h2) != set.end())
                return h2;
            
            h2 = h2->next;
        }
    
        return NULL;
    }
};