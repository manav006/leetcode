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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {

        if(head->next->next==NULL || head->next==NULL || head==NULL){
            return {-1,-1};
        }
        vector<int>critical;
        ListNode * temp = head;
        int curr =1;
        while(temp->next->next!=NULL){
            
                if(temp->next->val < temp->val && temp->next->next->val >temp->next->val){
                   critical.push_back(curr+1);
                }

                if(temp->next->val > temp->val && temp->next->next->val <temp->next->val){
                    critical.push_back(curr+1);
                }
            temp=temp->next;
            curr++;
        }

        
        
        sort(critical.begin(),critical.end());
        if(critical.size()<2){
            return {-1,-1};
        }

        int minimum=INT_MAX;

        for(int i=1;i<critical.size();i++){
            minimum=min(minimum,critical[i]-critical[i-1]);
        }

        int maximum =critical[critical.size()-1]-critical[0];

        return {minimum,maximum};
        
    }
};