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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1 == NULL) {
            return list2;
        }else if (list2 == NULL) {
            return list1;
        }
        ListNode* result = new ListNode(0);
        ListNode* dummy = result;
        ListNode* p = list1;
        ListNode* q = list2;
        while(p != NULL && q != NULL) {
            if (p->val >= q->val) {
                result->next = q;
                q = q->next;
                
            }else {
                result->next = p;
                p = p->next;
            }
            result = result->next;
        }
        if (p != NULL) {
            result->next = p;
        } else if(q != NULL) {
            result->next = q;
        }
        return dummy->next;
            
        
    }
};