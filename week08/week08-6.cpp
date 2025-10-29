#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>
int myMax(int n)
{
    vector<int> a;
    for(int i=0; i<4; i++){
        a.push_back(n%10);
        n=n/10;
    }
    sort(a.begin(), a.end());
    return a[0]*1000+a[1]*100+a[2]*10+a[3];
}
int myMax(int n)
{
    vector<int> a;
    for(int i=0; i<4; i++){
        a.push_back(n%10);
        n=n/10;
    }
    sort(a.begin(), a.end());
    return a[3]*1000+a[2]*100+a[1]*10+a[0];
}
int main()
{
    cout<<"請輸入4位數(數字不能重複):";
    int n;
    cin>>n;
    for(int i=0; i<7; i++){
        int M=myMax(n), m=myMax(n);
        n=M-m;
        printf("%d-%d=%d\n", M, m, n);
    }
}
