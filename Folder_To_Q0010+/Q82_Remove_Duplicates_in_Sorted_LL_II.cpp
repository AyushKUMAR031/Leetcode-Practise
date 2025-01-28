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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head == nullptr || head->next == nullptr){
            return head;
        }
        ListNode* prev = new ListNode(0);
        ListNode* ptr = prev;
        ListNode* curr = head;
        while(curr != NULL && curr->next != NULL){
            if(curr->val == curr->next->val){
                while(curr->next != NULL && curr->val == curr->next->val ){
                    curr = curr->next;
                }
                prev->next = curr->next;
                curr= curr->next;
            }else{
                prev->next = curr;
                prev = curr;
                curr = curr->next;
            }
        }

        return ptr->next;
    }
};
