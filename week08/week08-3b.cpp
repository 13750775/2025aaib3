/// week08-3a.cpp LeetCode 學習計畫 Simulation
/// 1275. Find Winner on a Tic Tac Toe Game
/// 看起來是 3x3 陣列，所以用 int a[3][3] = {}; 陣列，再用 myPrint() 印出來
class Solution {
public:
    string tictactoe(vector<vector<int>>& moves) {
        int a[3][3] = {};  /// 有大括號，當作0
        int now = 1;  /// 1: 玩家A 第1個玩家 2: 玩家B 第2個玩家
        int winner=0;
        for (vector<int> move : moves) {
            int i = move[0], j = move[1];
            a[i][j] = now;  /// 玩家填入格子
            if(a[i][0]==now&&a[i][1]==now&&a[i][2]==now) winner=now;
            if(a[0][j]==now&&a[1][j]==now&&a[2][j]==now) winner=now;
            if(a[0][0]==now&&a[1][1]==now&&a[2][2]==now) winner=now;
            if(a[0][2]==now&&a[1][1]==now&&a[2][0]==now) winner=now;
            if(now == 1) now = 2;  /// A下完後，將換下
            else now = 1;  /// B下完後，將換下
        }
        if(winner==1) return "A";
        else if(winner==2) return "B";
        else if(moves.size()==9) return "Draw";
        else return "pending";
    }
};
