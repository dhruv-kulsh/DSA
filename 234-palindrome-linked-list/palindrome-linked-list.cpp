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
    ListNode * findMiddle(ListNode *head){
        ListNode *slow = head;
        ListNode *fast = head;
        while(fast != NULL){
            slow = slow->next;
            fast = fast->next;
            if(fast != NULL)
            fast = fast->next;
        }
        return slow;
    }

    ListNode *reverse(ListNode *head){
        ListNode *prev = NULL;
        ListNode *curr = head;
        ListNode *forward = NULL;

        while(curr != NULL){
            forward = curr->next;
            curr->next = prev;
            prev = curr;
            curr = forward;
        }
        return prev;
    }
    bool check(ListNode* head1, ListNode* head2){
        while(head2 != NULL){
            if(head1->val != head2->val) return false;
            head1 = head1->next;
            head2 = head2->next;
        }
        return true;
    }
    void print(ListNode* head){
        while(head != NULL){
            cout<<head->val<<" ";
            head = head->next;
        }
    }
public:
    bool isPalindrome(ListNode* head) {
        if(head == NULL || head->next == NULL) return true;
        ListNode *middle = findMiddle(head);
        print(middle);
        ListNode *head2 = reverse(middle);
        return check(head, head2);
    }
};