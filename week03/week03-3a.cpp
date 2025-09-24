/// week03-3a.cpp
/// LeetCode 學習計劃 1822. Sign of the Product of an Array
class Solution {
public:
    int arraySign(vector<int>& nums) {
        int ans = 1; /// 初始化為1，乘上任何數，結果仍為任何數
        for (int i = 0; i < nums.size(); i++) {
            ans *= nums[i]; /// 將陣列的每個元素相乘
        }
        if (ans > 0) return 1;  /// 如果結果為正，回傳1
        if (ans < 0) return -1; /// 如果結果為負，回傳-1
        return 0;               /// 如果結果為零，回傳0
    }
};
