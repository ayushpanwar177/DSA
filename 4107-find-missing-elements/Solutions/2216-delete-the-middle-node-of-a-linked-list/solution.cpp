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
    ListNode* deleteMiddle(ListNode* head) {
        if(!head -> next){
            return nullptr;
        }
        ListNode *slow_pr = nullptr,*slow = head,*fast = head;
        while(fast && fast -> next){
            slow_pr = slow;
            slow = slow -> next;
            fast = fast -> next -> next;
        }
        slow_pr -> next = slow -> next;
        return head;
    }
};
