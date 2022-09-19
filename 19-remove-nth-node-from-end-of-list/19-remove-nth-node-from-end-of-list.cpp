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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        ListNode* currentNode = head;
        ListNode* matchNode = head;
        
        int size {1};
        for (int i = 0; i < n && currentNode->next; ++i)
        {
            currentNode = currentNode->next;
            ++size;
        }
        
        if (size == 1) return nullptr;
        
        if (size == n)
        {
            return head->next;
        }
        
        while (currentNode->next)
        {
            currentNode = currentNode->next;
            matchNode = matchNode->next;
        }
        
        if (matchNode->next == nullptr)
        {
            return nullptr;
        }
        
        
        matchNode->next = matchNode->next->next;
        
        return head;
    }
};