///week07-1..cpp
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;

    for(int i=1; i<2*n; i++){
        for(int j=1; j<2*n; j++){
            if(j>1) cout<<" ";
            cout<<n;
        }
        cout<<"現在是第i樓, i;"<<i;
        cout<<endl;
    }
}
