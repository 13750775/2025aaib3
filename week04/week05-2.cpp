#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> a(3);         /// ��l�ƪ����׬�3�A�̭�����0
    vector<int> b(3, 88);     ///��l�ƪ����׬�3�A�̭�����88
    int c[10] = {1, 2, 3, 9, 6, 7, 4, 5, 6, 0};  /// C�y�����}�C�ŧi�A��l�ƭ�

    vector<int> d(c, c+3);    /// �qc�}�C�}�l�A��̫ᵲ���A�}�Cc�}�Y�A�A��3�ӵ���
    for(int i = 0; i < d.size(); i++)
        cout << d[i] << " ";   /// �o�O��C�y�����}�C���U�A���C++�}�C����l�Ƥ@����

    vector<int> e(c, c+10);   /// �qc�}�C�}�l�A��̫ᵲ���A�}�Cc�}�Y�A�A��10�ӵ���
    for(int i = 0; i < e.size(); i++)
        cout << e[i] << " ";   /// �o�]�O��C�y�����}�C���U�A���C++�}�C����l�Ƥ@����
}
