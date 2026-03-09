                              // Segregating Odd And Even Nodes in Linked List 
//Time complexity: O(N)
//Space complexity: O(1)

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
    ListNode* oddEvenList(ListNode* head) {
        if(head==nullptr || head->next==nullptr) return head;
        ListNode* Odd=head;
        ListNode* Even=head->next;
        ListNode* EvenHead=head->next;
        while(Even!=nullptr && Even->next!=nullptr){
            Odd->next=Odd->next->next;
            Even->next=Even->next->next;
            Odd=Odd->next;
            Even=Even->next;
        }
        Odd->next=EvenHead;
        return head;
    }
};
