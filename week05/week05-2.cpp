///week05-2
#include <iostream>
#include <string>
#include <sstream>
using namespace std;
int main()
{
    string line;///�ǳƩ�@���r��
    getline(cin, line);///�@���W�J�@���
    cout<<line<<endl;

    stringstream ss(line);///��string�ܦ�stream
    string word;
    while(ss>>word){
        cout<<"ssŪ��@�Ӧr:"<<word<<endl;
    }
}
