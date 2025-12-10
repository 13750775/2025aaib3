#include <iostream>
using namespace std;
int main()
{
    int n;
    while(cin>>n){
        if(n<0) break;
        int ans=1+(1+n)*n/2;
        cout<<ans<<"\n";
    }
}
