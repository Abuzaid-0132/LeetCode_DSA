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
    bool hasCycle(ListNode *head) {
        
        ListNode* curr = head;
        unordered_set<ListNode*> set;
        
        while(curr != NULL) {
            
            if(set.find(curr) != set.end())
                return true;
            
            set.insert(curr);
            curr = curr->next;
            
        }
        
        return false;
    }
};