/// LeetCode 3349. Adjacent Increasing Subarrays Detection I
/// nums 陣列，數字有正增長，請問有沒有 2 個相鄰子陣列，裡面都是增長？
/// ex. 2, 5, 7, 8, 9, 2, 3, 4, 3, 1
/// /combo  1 2 3 4 5 1 2 3 4 1
class Solution {
public:
    bool hasIncreasingSubarrays(vector<int>& nums, int k) {
        /// 使用玩遊戲常見的 combo 連續
        int N = nums.size(); /// 陣列大小
        vector<int> combo(N, 1);  /// 有 N 格，裡面都放原來的值1

        for (int i = 1; i < N; i++) {  /// 從 i = 1 開始，檢查每個數字是否遞增
            if (nums[i - 1] < nums[i]) {
                combo[i] = combo[i - 1] + 1;  /// 如果數字較大，就不會再增加，保持原來的值
            }
        }

        /// 檢查是否有相鄰2個長度至少為 k 的子陣列，combo值不為零，個個連續
        for (int i = 0; i < N - k; i++) {
            if (combo[i] >= k && combo[i + k] >= k) return true;  /// 這裡的條件，確保有兩個長度大於等於 k 的遞增子陣列
        }

        return false;  /// 若沒有符合條件的遞增子陣列，則返回 false
    }
};
