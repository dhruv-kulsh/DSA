/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
    int findlength(ListNode* head) {
        int cnt = 0;
        while (head != NULL) {
            cnt++;
            head = head->next;
        }
        return cnt;
    }

public:
    ListNode* getIntersectionNode(ListNode* headA, ListNode* headB) {
        // ListNode* head1 = headA;
        // ListNode* head2 = headB;
        int len1 = findlength(headA);
        int len2 = findlength(headB);
        cout << len1 << " " << len2 << endl;
        int cnt = 0;
        if (len1 > len2) {
            while (cnt < len1 - len2) {
                headA = headA->next;
                cnt++;
            }
        }
        cnt = 0;
        if (len2 > len1) {
            while (cnt < len2 - len1) {
                headB = headB->next;
                cnt++;
            }
        }
        // cout << headA->val << " " << headB->val << endl;
        while(headA != NULL || headB != NULL){
            if(headA == headB) return headA;
            headA = headA->next;
            headB = headB->next;
        }
        return NULL;
    }
};