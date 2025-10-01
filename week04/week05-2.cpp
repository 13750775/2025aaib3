#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> a(3);         /// 初始化的長度為3，裡面都放0
    vector<int> b(3, 88);     ///初始化的長度為3，裡面都放88
    int c[10] = {1, 2, 3, 9, 6, 7, 4, 5, 6, 0};  /// C語言的陣列宣告，初始化值

    vector<int> d(c, c+3);    /// 從c陣列開始，到最後結束，陣列c開頭，再移3個結束
    for(int i = 0; i < d.size(); i++)
        cout << d[i] << " ";   /// 這是用C語言的陣列輔助，轉位C++陣列的初始化一推值

    vector<int> e(c, c+10);   /// 從c陣列開始，到最後結束，陣列c開頭，再移10個結束
    for(int i = 0; i < e.size(); i++)
        cout << e[i] << " ";   /// 這也是用C語言的陣列輔助，轉位C++陣列的初始化一推值
}
