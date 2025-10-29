/// week08-3a.cpp LeetCode 學習計畫 Simulation
/// 1275. Find Winner on a Tic Tac Toe Game
///看起來是 3x3 陣列，所以用 int a[3][3] = {}; 陣列，再用 myPrint() 印出來
class Solution {
public:
    void myPrint(int a[3][3]) {   /// 小幫手, 幫我們印出來
        for(int i = 0; i < 3; i++) {  /// 遍歷列
            for(int j = 0; j < 3; j++) {
                cout << a[i][j] << " ";   /// 印出每個位置的數字
            }
            cout << "\n";  /// 換行
        }
        cout << "\n";  /// 換行
    }    string tictactoe(vector<vector<int>>& moves) {
        int a[3][3] = {};  /// 有大括號，當作0
        int now = 1;  /// 1: 玩家A 第1個玩家 2: 玩家B 第2個玩家

        for (vector<int> move : moves) {
            int i = move[0], j = move[1];
            a[i][j] = now;  /// 玩家填入格子
            myPrint(a);  /// 把陣列印出來啦！我們的小幫手
            /// 換玩家
            if(now == 1) now = 2;  /// A下完後，將換下
            else now = 1;  /// B下完後，將換下
        }
        return "A";  /// 先隨便 return 啦！
    }
};
