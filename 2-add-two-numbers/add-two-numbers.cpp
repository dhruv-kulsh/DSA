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
    // ListNode* reverse(ListNode* temp)
    // {
    //     ListNode *prev = NULL;
    //     ListNode *curr = temp;
    //     ListNode *forward = NULL;
    //     while(curr != NULL){
    //         forward = curr->next;
    //         curr->next = prev;
    //         prev = curr;
    //         curr = forward;
    //     }
    //     return prev;
    // }

    ListNode* add(ListNode* l1, ListNode* l2)
    {
        // ListNode *temp1 = reverse(l1);
        // ListNode *temp2 = reverse(l2);
        ListNode *anshead = NULL;
        ListNode *anstail = NULL;
        int carry = 0;

        while(l1 != NULL && l2 != NULL)
        {
            int val1 = l1->val;
            int val2 = l2->val;
            // cout<<"carry "<<carry<<endl;
            // cout<<"val1 "<<val1<<" val2 "<<val2;
            int sum = (val1 + val2 + carry)%10;
            // cout<<sum<<endl;
            carry = (val1 + val2 + carry)/10;
            insertattail(anshead, anstail, sum);
            l1 = l1->next;
            l2 = l2->next;
        }

        while(l1 != NULL){
            int val1 = l1->val;
            int sum = (val1 + carry)%10;
            carry = (val1 + carry)/10;
            insertattail(anshead, anstail, sum);
            l1 = l1->next;
        }

        while(l2 != NULL){
            int val2 = l2->val;
            int sum = (val2 + carry)%10;
            carry = (val2 + carry)/10;
            insertattail(anshead, anstail, sum);
            l2 = l2->next;
        }
        if(carry != 0){
            insertattail(anshead, anstail, carry);
        }
        return (anshead);
    }

    void insertattail(ListNode* &anshead, ListNode* &anstail, int digit){
        ListNode *newnode = new ListNode(digit);
        if(anshead == NULL){
            anshead = newnode;
            anstail = newnode;
        }
        else{
            anstail->next = newnode;
            anstail = newnode;
        }
    }
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        // l1 = reverse(l1);
        // l2 = reverse(l2);
        // insertattail(10);
        return add(l1, l2);
    }
};