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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        ListNode* temp=head;
        ListNode* runner=new ListNode();
        for(int i=0;i<nums.size();i++){
            temp=head;
            runner=new ListNode();
            if(head->val==nums[i]){
                runner->next=head->next;
                head=head->next;
                temp=head->next;
            }

            while(temp!=nullptr){
                if(temp->val==nums[i]){
                    runner->next=temp->next;
                    temp=runner->next;
                    // temp->val=0;
                }
                else{
                    runner=temp;
                    temp=temp->next;
                }
            }
        }
        return head;
    }
};