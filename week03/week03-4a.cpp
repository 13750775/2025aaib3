/// week03-4a.cpp
/// LeetCode 學習計劃 283. Move Zeroes
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int> ans; /// 用來存放非零元素的陣列
        /// 將所有非零元素推入 ans 陣列中
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != 0) ans.push_back(nums[i]); /// 如果不是零，就加入 ans
        }
        /// 更新原陣列
        for (int i = 0; i < nums.size(); i++) {
            if (i < ans.size()) /// 如果還有非零元素
                nums[i] = ans[i]; /// 讓 nums 的前部分等於 ans
            else
                nums[i] = 0; /// 剩下的部分設為 0
        }
    }
};
