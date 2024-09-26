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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        vector<int> temp;
        if(list1==nullptr){
            return list2;
        }
        if(list2==nullptr){
            return list1;
        }
        while(list1->next!=nullptr){
            temp.push_back(list1->val);
            list1=list1->next;
        }
        while(list2->next!=nullptr){
            temp.push_back(list2->val);
            list2=list2->next;
        }
        sort(temp.begin(),temp.end());
        ListNode* m;
        ListNode* ans;
        m=new ListNode();
        ans=new ListNode();
        ans=m;
        for(int i=0;i<temp.size();i++){
            m->val=temp[i];
            m->next=nullptr;
            m=m->next;
        }
        return ans;

    }
};

int main(){
    
}