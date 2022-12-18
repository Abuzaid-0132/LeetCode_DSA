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
        
        ListNode* ptr1 = headA;
        ListNode* ptr2 = headB;
        
        set<ListNode*> st;
        
        while(ptr1!=NULL){
            st.insert(ptr1);
            ptr1=ptr1->next;
        }
        
        while(ptr2!=NULL){
            if(st.find(ptr2)!=st.end())
                break;
            ptr2=ptr2->next;
        }
        
        return ptr2;
        
    }
};