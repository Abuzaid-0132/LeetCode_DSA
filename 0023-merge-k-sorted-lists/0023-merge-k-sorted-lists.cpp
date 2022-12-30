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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        
        if(lists.size() == 0)
            return NULL;
        
        priority_queue<int,vector<int>,greater<int>> min_heap;
        
        for(int i=0; i<lists.size(); i++) {
            
            ListNode* head = lists[i];
            
            while(head != NULL) {
                
                min_heap.push(head->val);
                head = head->next;
            }
            
        }
        
        ListNode* start = NULL;
        ListNode* end = NULL;
        
        while(min_heap.empty() == false) {
            
            if(start == NULL){
                
                start = new ListNode(min_heap.top());
                end = start;
                min_heap.pop();
            }
            else{
                end->next = new ListNode(min_heap.top());
                min_heap.pop();
                
                end = end->next;
            }
            
        }
        
        return start;
    }
};