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
    ListNode* mergeNodes(ListNode* head) {
        long long temp = 0;
        ListNode* iterar = new ListNode;
        ListNode* anchor = iterar;

        head = head->next;  // Skip the initial 0 node

        while (head != nullptr && head->next!= nullptr) {
            if (head->val != 0) {
                temp += head->val;
            } else {
                iterar->val = temp;
                temp = 0;
                iterar->next = new ListNode;
                iterar = iterar->next;
            }
            head = head->next;
        }

        // Set the value of the last node (if non-zero sum is remaining)
        iterar->val = temp;

        return anchor;
    }
};

int main() {
  // Create the linked list
  ListNode* head = new ListNode(0);
  head->next = new ListNode(3);
  head->next->next = new ListNode(1);
  head->next->next->next = new ListNode(0);
  head->next->next->next->next = new ListNode(4);
  head->next->next->next->next->next = new ListNode(5);
  head->next->next->next->next->next->next = new ListNode(2);
  head->next->next->next->next->next->next->next = new ListNode(0);

  // Call the mergeNodes function
  Solution solution;
  ListNode* mergedList = solution.mergeNodes(head);

  // Print the merged list (optional)
  while (mergedList) {
    cout << mergedList->val << " ";
    mergedList = mergedList->next;
  }
  cout << endl;

  return 0;
}