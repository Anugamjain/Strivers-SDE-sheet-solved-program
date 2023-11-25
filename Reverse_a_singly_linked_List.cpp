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
    ListNode* insertathead(ListNode* &head,int v)
    {
        ListNode* temp=new ListNode(v);
        temp->next=head;
        head=temp;
        return temp;
    }

    ListNode* reverseList(ListNode* head) 
    {
        if(head==NULL)
            return head;
        ListNode* rev=new ListNode(head->val);
        head=head->next;
        ListNode* h=rev;
        while(head!=NULL)
        {
            h= insertathead(h,head->val);
            head=head->next;
        }
        
        return h;
    } 
};
