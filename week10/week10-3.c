class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {  /// 使用端對端的技巧，遍到繞，換方向
        int M = matrix.size(), N = matrix[0].size();
        int top = 0, bottom = M - 1, left = 0, right = N - 1;
        vector<int> ans;
        while (top <= bottom && left <= right) {  /// 邊範圍內，有機會
            for (int j = left; j <= right; j++) ans.push_back(matrix[top][j]);  /// 最上行，往右走
            top++;

            for (int i = top; i <= bottom; i++) ans.push_back(matrix[i][right]);  /// 最右行，往下走
            right--;

            if (!(top <= bottom && left <= right)) break;  /// "不"在範圍內，就要離開

            for (int j = right; j >= left; j--) ans.push_back(matrix[bottom][j]);  /// 最下行，往左走
            bottom--;

            for (int i = bottom; i >= top; i--) ans.push_back(matrix[i][left]);  /// 最左行，往上走
            left++;
        }

        return ans;
    }
};
