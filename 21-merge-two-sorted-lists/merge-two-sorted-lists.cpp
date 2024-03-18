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

    void insertattail(int data, ListNode *&anshead, ListNode *&anstail){
        if(anstail == NULL)
        {
            ListNode *temp = new ListNode(data);
            anshead = temp;
            anstail = temp;
        }
        else
        {
            ListNode *temp = new ListNode(data);
            anstail->next = temp;
            anstail = temp;
        }
    }

public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1 == NULL) return list2;
        if(list2 == NULL) return list1;
        ListNode *anshead = NULL;
        ListNode *anstail = NULL;
        // cout<<list1->val<<endl;
        while(list1 != NULL && list2 != NULL)
        {
            cout<<list1->val;
            int val1 = list1->val;
            int val2 = list2->val;
            cout<<val1<<" "<<val2<<endl;
            if(val1 <= val2)
            {
                insertattail(val1, anshead, anstail);
                list1 = list1->next;
            }

            if(val1 > val2)
            {
                insertattail(val2, anshead, anstail);
                list2 = list2->next;
            }
        }

        while(list1 != NULL){
            int val1 = list1->val;
            insertattail(val1, anshead, anstail);
            list1 = list1->next;
        }

        while(list2 != NULL){
            int val2 = list2->val;
            insertattail(val2, anshead, anstail);
            list2 = list2->next;
        }
        return anshead;
    }
};