                                //Right Rotation Of Linked List By K Places
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
    ListNode* findNewTail(ListNode* temp,int k){
        int cnt=1;
        while(temp!=nullptr && cnt<k){
            cnt++;
            temp=temp->next;
        }
        return temp;
    }
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==nullptr || k==0) return head;
        int len=1;
        ListNode* tail=head;
        while(tail->next!=nullptr){
            len++;
            tail=tail->next;
        }
        k=k%len;
        if(k==0) return head;
        tail->next=head;
        ListNode* NewTail=findNewTail(head,len-k);
        head=NewTail->next;
        NewTail->next=nullptr;
        return head;
    }
};
