#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> a;
    cout << "沒有初始化的a的長度是" << a.size() << endl;
    a.push_back(99);
    cout << "a.push_back()後的長度變為" << a.size() << endl;

    vector<int> b(3);  /// "b" 的陣列初始化為3個元素，長度是3，預設值為0。
    cout << "b的長度是" << b.size() << endl;
    b.push_back(99);
    for (int i = 0; i < b.size(); i++) cout << b[i] << ' ';  /// 0 0 0 99
    cout << "b新增99後，長度變為" << b.size() << endl;

    vector<int> c(3, 88);  /// "c" 陣列初始化為3個88，長度是3
    for (int i = 0; i < c.size(); i++) cout << c[i] << ' ';  /// 88 88 88
    cout << "c的長度是" << c.size() << endl;
}
