/// week03-4b.cpp
/// LeetCode 學習計劃 283. Move Zeroes
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int k = 0; /// 用來記錄非零元素的插入位置
        /// 第一輪：移動非零元素到陣列前端
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != 0) nums[k++] = nums[i]; /// 如果不是零，則將其放置在 k 位置，並遞增 k
        }
        /// 第二輪：將剩下的位置設為零
        for (int i = k; i < nums.size(); i++) {
            nums[i] = 0; /// 將 k 之後的元素設為零
        }
    }
};
