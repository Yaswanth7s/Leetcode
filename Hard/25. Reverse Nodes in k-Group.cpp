                                //Reversing Nodes in K-Groups in a Linked list
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
    ListNode* ReverseLL(ListNode* temp){
        ListNode* prev=nullptr;
        while(temp!=nullptr){
            ListNode* front=temp->next;
            temp->next=prev;
            prev=temp;
            temp=front;
        }
        return prev;
    }
    ListNode* findKthNode(ListNode* temp,int k){
        k-=1;
        while(temp!=nullptr && k>0){
            k--;
            temp=temp->next;
        }
        return temp;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* temp=head;
        ListNode* prevNode=nullptr;
        while(temp!=nullptr){
            ListNode* KthNode=findKthNode(temp,k);
            if(KthNode==nullptr){
                if(prevNode){
                    prevNode->next=temp;
                }
                break;
            }
            ListNode* nextNode=KthNode->next;
            KthNode->next=nullptr;
            ListNode* newHead=ReverseLL(temp);
            if(temp==head){
                head=newHead;
            }
            else{
                prevNode->next=newHead;
            }
            prevNode=temp;
            temp=nextNode;
        }
        return head;
    }
};
