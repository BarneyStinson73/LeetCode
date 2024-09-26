#include<bits/stdc++.h>
using namespace std;

  struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
 
class Solution {
public:
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        if(head->next==nullptr){
            return head;
        }
        ListNode* tt=head;
        while(tt->next!=nullptr){
            int gcd_val=__gcd(tt->val,tt->next->val);
            ListNode* temp=new ListNode();
            temp->val=gcd_val;
            temp->next=tt->next;
            tt->next=temp;
            tt=temp->next;
        }
        return head;
    }
};