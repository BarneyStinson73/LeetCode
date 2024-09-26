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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        
        vector<int> ans;
        vector<int> indices;
        int prev=head->val,count=0;
        head=head->next;
        count++;
        while(head!=nullptr and head->next!=nullptr){
            int next=head->next->val;
            if(head->val>prev && head->val>next){
                // "getting max,count is"<<count<<endl;
                indices.push_back(count);
                prev=head->val;
                head=head->next;
                count++;
            }
            else if(head->val<prev && head->val<next){
                // "getting min,count is"<<count<<endl;
                indices.push_back(count);
                prev=head->val;
                head=head->next;
                count++;
            }
            else{
                prev=head->val;
                head=head->next;
                count++;
            }
        }
        if(indices.size()==0){
            ans.push_back(-1);ans.push_back(-1);
            return ans;
        }
        for(int i=0;i<indices.size();i++){
            // "indices:"<<indices[i]<<",";
        }
        long long highest=INT64_MIN,lowest=INT64_MAX;
        for(int i=0;i<indices.size();i++){
            for(int j=i;j<indices.size();j++){
                if(abs(indices[j]-indices[i])>=highest){
                    highest=abs(indices[j]-indices[i]);
                }
                // else if(abs(indices[j]-indices[i])<lowest){
                //     lowest=abs(indices[j]-indices[i]);
                // }
            }
        }
        // "highest is "<<highest<<endl;
        for(int i=0;i<indices.size()-1;i++){
            for(int j=i+1;j<indices.size();j++){
                // "gaps "<<indices[j]-indices[i]<<endl;
                if(abs(indices[j]-indices[i])<=lowest){
                    lowest=abs(indices[j]-indices[i]);
                }
            }
        }
        // "lowest is "<<lowest<<endl;
        // if(highest== INT64_MIN && lowest==INT64_MAX){
        //     ans.push_back(-1);ans.push_back(-1);
        // }
        // else{
            ans.push_back(lowest);
            ans.push_back(highest);
        // }
        return ans;

    }
};

int main() {
  // Create the linked list
  ListNode* head = new ListNode(1);
  head->next = new ListNode(3);
//   head->next->next = new ListNode(2);
//   head->next->next->next = new ListNode(2);
//   head->next->next->next->next = new ListNode(3);
//   head->next->next->next->next->next = new ListNode(2);
//   head->next->next->next->next->next->next = new ListNode(2);
//   head->next->next->next->next->next->next->next = new ListNode(2);
//   head->next->next->next->next->next->next->next->next = new ListNode(7);

  // Call the nodesBetweenCriticalPoints function
  Solution solution;
  vector<int> result = solution.nodesBetweenCriticalPoints(head);

  // Print the result
  cout << "[";
  for (int i = 0; i < result.size(); i++) {
    cout << result[i] << (i != result.size() - 1 ? ", " : "");
  }
  cout << "]" << endl;

  return 0;
}