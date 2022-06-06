/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *temp1 = headA;
        ListNode *temp2 = headB;
        
        while(temp1 != temp2)
        {   
            if(temp1 != NULL)
                temp1 = temp1->next;
            
            else if(temp1 == NULL)
                temp1 = headB;
            
            if(temp2 != NULL)
                temp2 = temp2->next;
            
            else if(temp2 == NULL)
                temp2 = headA;
        }
        
        return temp1;
    }
};