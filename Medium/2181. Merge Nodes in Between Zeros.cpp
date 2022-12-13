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
    ListNode* mergeNodes(ListNode* head) {
        ListNode* first = head;
        ListNode* last = head -> next;

        int sum = 0;
        while(last != nullptr){
            sum += last->val;
            if(last->val == 0){
                last->val = sum;
                first->next = last;
                first = first->next;
                sum = 0;
            }
            last = last->next;
        }
        return head->next;
    }
};