/// week08-3a.cpp LeetCode �ǲ߭p�e Simulation
/// 1275. Find Winner on a Tic Tac Toe Game
/// �ݰ_�ӬO 3x3 �}�C�A�ҥH�� int a[3][3] = {}; �}�C�A�A�� myPrint() �L�X��
class Solution {
public:
    string tictactoe(vector<vector<int>>& moves) {
        int a[3][3] = {};  /// ���j�A���A��@0
        int now = 1;  /// 1: ���aA ��1�Ӫ��a 2: ���aB ��2�Ӫ��a
        int winner=0;
        for (vector<int> move : moves) {
            int i = move[0], j = move[1];
            a[i][j] = now;  /// ���a��J��l
            if(a[i][0]==now&&a[i][1]==now&&a[i][2]==now) winner=now;
            if(a[0][j]==now&&a[1][j]==now&&a[2][j]==now) winner=now;
            if(a[0][0]==now&&a[1][1]==now&&a[2][2]==now) winner=now;
            if(a[0][2]==now&&a[1][1]==now&&a[2][0]==now) winner=now;
            if(now == 1) now = 2;  /// A�U����A�N���U
            else now = 1;  /// B�U����A�N���U
        }
        if(winner==1) return "A";
        else if(winner==2) return "B";
        else if(moves.size()==9) return "Draw";
        else return "pending";
    }
};
