#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> a;
    cout << "�S����l�ƪ�a�����׬O" << a.size() << endl;
    a.push_back(99);
    cout << "a.push_back()�᪺�����ܬ�" << a.size() << endl;

    vector<int> b(3);  /// "b" ���}�C��l�Ƭ�3�Ӥ����A���׬O3�A�w�]�Ȭ�0�C
    cout << "b�����׬O" << b.size() << endl;
    b.push_back(99);
    for (int i = 0; i < b.size(); i++) cout << b[i] << ' ';  /// 0 0 0 99
    cout << "b�s�W99��A�����ܬ�" << b.size() << endl;

    vector<int> c(3, 88);  /// "c" �}�C��l�Ƭ�3��88�A���׬O3
    for (int i = 0; i < c.size(); i++) cout << c[i] << ' ';  /// 88 88 88
    cout << "c�����׬O" << c.size() << endl;
}
