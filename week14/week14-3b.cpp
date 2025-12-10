class Solution {
public:
    ListNode* myReverse(ListNode* head) {
        if (head == nullptr || head->next == nullptr) return head;
        ListNode* ans = myReverse(head->next);
        head->next->next = head;
        head->next = nullptr;
        return ans;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* list1 = myReverse(l1);
        ListNode* list2 = myReverse(l2);
        return myReverse(myAddTwoNumbers(list1, list2));
    }
    ListNode* myAddTwoNumbers(ListNode* list1, ListNode* list2) {
        ListNode* ans = new ListNode(0);
        ListNode* ans2 = ans;
        int carry = 0;
        while (list1 != nullptr || list2 != nullptr) {
            int now = carry;
            if (list1 != nullptr) {
                now += list1->val;
                list1 = list1->next;
            }
            if (list2 != nullptr) {
                now += list2->val;
                list2 = list2->next;
            }
            ans2->next = new ListNode(now % 10);
            ans2 = ans2->next;
            carry = now / 10;
        }
        if (carry > 0) ans2->next = new ListNode(carry);
        return ans->next;
    }
};
