// leetcode Practice
// question 203. Remove Linked List Elements
// ANSWER
// class Solution {
// public:
//     ListNode* removeElements(ListNode* head, int val) {
//         if(head==NULL){
//             return head;
//         }
//         if (head->val==val && head->next == NULL){
//             head=NULL;
//             return head;
//         }
//         while (head != NULL && head->val == val) {
//             head = head->next;
//         }
//         ListNode * temp=head;
//         while(temp!=NULL&& temp->next!=NULL){
//             if(temp->next->val==val){
//                 ListNode* temp2=temp->next;
//                 temp->next=temp2->next;
//                 delete temp2;
//             }
//             else{
//                 temp=temp->next;
//             }
//         }
//         return head;
//     }
// };