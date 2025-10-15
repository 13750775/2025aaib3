/// 今天的 LeetCode 挑戰題，有點難
/// LeetCode 3350. Adjacent Increasing Subarrays Detection II
/// 題目跟昨天的 3349 很像，昨天給你 k，今天問你最大的 k
/// 用 combo，左到右，右到左，累積多少
class Solution {
public:
    int maxIncreasingSubarrays(vector<int>& nums) {
        int N = nums.size();  /// 陣列的大小
        vector<int> left(N, 1);  /// 左到右的 combo
        vector<int> right(N, 1); /// 右到左的 combo
        for (int i = 1; i < N; i++) {
            if (nums[i-1]<nums[i]) left[i] = left[i-1]+1;
        }
        for (int i = N - 2; i >= 0; i--) {
            if (nums[i]<nums[i+1]) right[i] = right[i+1]+1;
        }
        int ans = 0; /// 找到最大的 k，這裡的 k 要符合兩個相鄰陣列的條件：要持續增加的最長長度
        for (int i=0; i<N-1; i++) {
            int now = min(left[i],right[i+1]);  /// 現在這格左右兩邊的 combo
            if (now>ans) ans = now;  /// 有更大的 k，就更新 ans
        }
        return ans;
    }
};
