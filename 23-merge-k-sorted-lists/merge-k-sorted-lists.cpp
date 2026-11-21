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

    int sizeOfList(ListNode* list, int& cnt) {
        if (list == NULL)
            return 0;
        cnt++;
        sizeOfList(list->next, cnt);
        return cnt;
    }

public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if (!lists.size())
            return NULL;
        int size = lists.size();
        priority_queue<int, vector<int>, greater<int>> pq;
        for (int i = 0; i < size; i++) {
            ListNode* temp = lists[i];
            while (temp != NULL) {
                pq.push(temp->val);
                temp = temp->next;
            }
        }
        if(pq.empty()) return NULL;

        ListNode *head = new ListNode(pq.top());
        ListNode *tail = head;

        pq.pop();

        while(!pq.empty()){
            int top = pq.top();
            pq.pop();
            tail->next = new ListNode(top);
            tail = tail->next;
        }

        return head;
    }
};