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
    bool isPalindrome(ListNode* head) {
        ListNode *slow = head;
        ListNode *fast = head;
        while(fast != NULL && fast->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
        }

        ListNode *curr = slow;
        ListNode *prev = NULL;
        ListNode *next = NULL;
        while(curr != NULL){
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }

        ListNode *left = head;
        ListNode *right = prev;
        while(right != NULL){
            if(left->val != right->val){
                return false;
            }
            left = left->next;
            right = right->next;
        }
        return true;



        // vector<int>arr;
        // ListNode *temp = head;
        // while(temp != NULL){
        //     arr.push_back(temp->val);
        //     temp = temp->next;
        // }
        // int left = 0;
        // int right = arr.size() - 1;
        // while(left < right){
        //     if(arr[left] != arr[right]){
        //         return false;
        //     }
        //     left++;
        //     right--;
        // }
        // return true;
    }
};