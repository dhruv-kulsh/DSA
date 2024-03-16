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
    ListNode* reverse(ListNode* head, int k)
    {
        if(head == NULL)
        {
            return NULL;
        }
        int cnt = 0;
        ListNode *prev = NULL;
        ListNode *nxt = NULL;
        ListNode *curr = head;
        ListNode *cursor = head;

        for(int i = 0; i < k; i++){
            if(cursor == NULL){
                return head;
            }
            cursor = cursor->next;
        }

        while(curr != NULL && cnt < k) {
            nxt = curr-> next;
            curr->next = prev;
            prev = curr;
            curr = nxt;
            cnt++;
        }
        if(nxt != NULL)
        head -> next = reverse(nxt, k);
        return prev;
    }
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        return reverse(head, k);
    }
};