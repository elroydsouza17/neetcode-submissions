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
    bool hasCycle(ListNode* head) {

        std::unordered_set<ListNode*> hash_set;
        ListNode* temp_ptr = head;
        while (temp_ptr != NULL) {
            auto result = hash_set.insert(temp_ptr);
            if (result.second == false) {
                return true;
            }
            temp_ptr = temp_ptr->next;
        }

        return false;
    }
};
