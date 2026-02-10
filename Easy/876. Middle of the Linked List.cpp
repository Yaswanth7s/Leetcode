                                //Returning the Middle Node of the Linked List
//Time complexity: O(n)
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
    ListNode* middleNode(ListNode* head) {
        int len=0;
        ListNode* temp=head;
        while(temp){
            len++;
            temp=temp->next;
        }
        int mid=len/2;
        temp=head;
        while(mid--){
            temp=temp->next;
        }
        return temp;
    }
};
