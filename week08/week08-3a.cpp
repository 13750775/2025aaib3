/// week08-3a.cpp LeetCode �ǲ߭p�e Simulation
/// 1275. Find Winner on a Tic Tac Toe Game
///�ݰ_�ӬO 3x3 �}�C�A�ҥH�� int a[3][3] = {}; �}�C�A�A�� myPrint() �L�X��
class Solution {
public:
    void myPrint(int a[3][3]) {   /// �p����, ���ڭ̦L�X��
        for(int i = 0; i < 3; i++) {  /// �M���C
            for(int j = 0; j < 3; j++) {
                cout << a[i][j] << " ";   /// �L�X�C�Ӧ�m���Ʀr
            }
            cout << "\n";  /// ����
        }
        cout << "\n";  /// ����
    }    string tictactoe(vector<vector<int>>& moves) {
        int a[3][3] = {};  /// ���j�A���A��@0
        int now = 1;  /// 1: ���aA ��1�Ӫ��a 2: ���aB ��2�Ӫ��a

        for (vector<int> move : moves) {
            int i = move[0], j = move[1];
            a[i][j] = now;  /// ���a��J��l
            myPrint(a);  /// ��}�C�L�X�ӰաI�ڭ̪��p����
            /// �����a
            if(now == 1) now = 2;  /// A�U����A�N���U
            else now = 1;  /// B�U����A�N���U
        }
        return "A";  /// ���H�K return �աI
    }
};
