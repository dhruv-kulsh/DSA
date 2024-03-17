/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
    ListNode* starting_point(ListNode* head) 
    {
        ListNode* slow = head;
        ListNode* fast = head;
        while (fast != NULL) 
        {
            slow = slow->next;
            fast = fast->next;
            if (fast != NULL)
                fast = fast->next;
            if (slow == fast)
                return slow;
        }
        return NULL;
    }

public:
    ListNode* detectCycle(ListNode* head) {
        if(head == NULL || head->next == NULL) return NULL;
        ListNode *slow = head;
        ListNode *inter =  starting_point(head);
        if(inter == NULL) return NULL;
        while(slow != inter){
            slow = slow->next;
            inter = inter->next;
        }
        return slow;
    }
};