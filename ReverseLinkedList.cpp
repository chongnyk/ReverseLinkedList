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
    ListNode* reverseList(ListNode* head) {
        ListNode* iter = head;
        stack<ListNode*> reverser;
        while(iter != nullptr){
            reverser.push(iter);
            if(iter->next != nullptr){
                iter = iter->next;
            }
            else {
                break;
            }
        }
        
        ListNode* result = iter;
        
        while(!reverser.empty()){
            iter = reverser.top();
            reverser.pop();
            if(!reverser.empty()){
                iter->next = reverser.top();
            }
            else {
                iter->next = nullptr;
            }
        }
        
        return result;
    }
};
