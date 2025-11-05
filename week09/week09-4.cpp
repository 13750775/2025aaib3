/// week09-4
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int M = matrix.size(), N = matrix[0].size();
        int top = 0, bottom = M - 1, left = 0, right = N - 1;
        vector<int> ans;
        while (top <= bottom && left <= right) {
            /// 沿著 top 行
            for (int j = left; j <= right; j++) {
                ans.push_back(matrix[top][j]);
            }
            top++; /// 每完成一個方向，就收縮對應的邊界
            if (top > bottom) break; /// 要檢查 top <= bottom，如果越界了，提早結束
            /// 沿著 right 右邊界
            for (int i = top; i <= bottom; i++) {
                ans.push_back(matrix[i][right]);
            }
            right--; /// 收縮右邊界
            if (left > right) break;
            /// 沿著 bottom 下邊界
            for (int j = right; j >= left; j--) {
                ans.push_back(matrix[bottom][j]);
            }
            bottom--; /// 收縮下邊界
            if (top > bottom) break;
            /// 沿著 left 左邊界
            for (int i = bottom; i >= top; i--) {
                ans.push_back(matrix[i][left]);
            }
            left++;
            if (left > right) break;
        }
        return ans;
    }
};
