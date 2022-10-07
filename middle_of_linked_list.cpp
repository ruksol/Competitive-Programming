//question link: https://leetcode.com/problems/middle-of-the-linked-list/

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
    ListNode* middleNode(ListNode* head) {
        int count = 0;
        ListNode* temp = head;
        while(temp!=NULL){
            temp = temp->next;
            count++;
        }
        int avg = (count%2==0)? (count/2)+1 : (count+1)/2;
        temp = head;
        for(int i=1; i<avg; i++){
            temp = temp->next;
        }
        return temp;
    }
};