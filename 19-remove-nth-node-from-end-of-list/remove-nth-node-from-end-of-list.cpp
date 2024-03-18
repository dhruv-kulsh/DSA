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
    int length(ListNode *head){
        int cnt = 0;
        while(head != NULL){
            head = head->next;
            cnt++;
        }
        return cnt;
    }
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        //Only 1 node
        if(head->next == NULL) return NULL;

        int len = length(head);
        // cout<<len<<" "<<endl;
        // First node deletion
        if(n == len) return head->next;
        int nth = len-n+1;

        // last node deletion
        if(n == 1) 
        {
            ListNode *curr = head;
            ListNode *prev = NULL;
            while(curr->next != NULL)
            {
                prev = curr;
                curr = curr->next;
                // cout<<prev->val<<curr->val<<endl;
            }
            prev->next = NULL;
            delete curr;
            return head;
        }

        ListNode *prev = NULL;
        ListNode *curr = head;
        cout<<nth<<endl;
        int cnt = 1;
        while(nth != cnt)
        {
            prev = curr;
            curr = curr->next;
            nth--;
            cout<<"prev"<<prev->val<<endl;
            cout<<"curr"<<curr->val<<endl;
        }


        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
        return head;
    }
};