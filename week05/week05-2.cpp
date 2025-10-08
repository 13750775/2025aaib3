///week05-2
#include <iostream>
#include <string>
#include <sstream>
using namespace std;
int main()
{
    string line;///準備放一整行字串
    getline(cin, line);///一次獨入一整行
    cout<<line<<endl;

    stringstream ss(line);///把string變成stream
    string word;
    while(ss>>word){
        cout<<"ss讀到一個字:"<<word<<endl;
    }
}
