#include <bits/stdc++.h>
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
    int listnode_valuation(ListNode *p){
        int result=0;
        int mul=1;
        while(p!=nullptr){
            result+=mul*p->val;
            mul=mul*10;
            p=p->next;
        }
        return result;
    }
    ListNode* int_to_list(int sum){
        ListNode *result,*head;
        result=new ListNode;
        result->val=0;
        result->next=nullptr;
        head=result;
        while(sum!=0){
            result->val=sum%10;
            sum=sum/10;
            ListNode *later=new ListNode;
            result->next=later;
            result=result->next;
        }
        return head;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        int result=listnode_valuation(l1)+listnode_valuation(l2);
        ListNode *ans=int_to_list(result);
        return ans;
    }
};
int main(){

}
