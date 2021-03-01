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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* dummyHead = new ListNode(0);
        int carry = 0,l1_val,l2_val,sum;
        ListNode* curr = dummyHead;
        while(l1 || l2){
            if(l1)
                l1_val = l1->val;
            else
                l1_val = 0;
            
            if(l2)
                l2_val = l2->val;
            else
            
                l2_val = 0;
            
            sum = l1_val+l2_val+carry;
            curr->next = new ListNode(sum%10);
            curr = curr->next;
            carry = sum/10;
            if(l1)
                l1 = l1->next;
            if(l2)
                l2 = l2->next;
            
        }
        if(carry){
            curr->next = new ListNode(carry);
        }
        
        return dummyHead->next;
    }
};
