/// WEEK13-5.CPP  題目二 加兩個 Linked List
/// LeetCode 2. Add Two Numbers 把鏈結串列 Linked List 視為數字相加

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {  /// 參數是兩個串列 l1 和 l2
        ListNode* ans = new ListNode(999);
        ListNode* ans2 = ans;  /// 宣告指向 ans，把 ans 後面的 Linked List 一步一個接下去
        int carry = 0;  /// 進位，寫最尾端的位放 0

        while (l1 != nullptr || l2 != nullptr) {  /// 只要有1個不是空指標!
            int now = carry;  /// 儲存當前，帶上進位1

            if (l1 != nullptr) {  /// 如果還有 l1 list1
                now += l1->val;   /// 把值加進來
                l1 = l1->next;    /// 換下一筆
            }

            if (l2 != nullptr) {  /// 如果還有 list2
                now += l2->val;   /// 把值加進來
                l2 = l2->next;    /// 換下一筆
            }

            ans2->next = new ListNode(now % 10);  /// 建好一個節點，後面直接接
            ans2 = ans2->next;  /// 繼續往後移(待接)
            carry = now / 10;   /// 計算進位
        }

        if (carry > 0) {  /// 若有進位？要再多建一位，給最高層的進位
            ans2->next = new ListNode(carry);
        }

        return ans->next;
    }
};
