#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin>>a>>b;
    int res = 0;
    res += a;
    while(a >= b)
    {
        res += a/b;
        a = a/b + a%b;
    }
    cout<<res<<endl;
    
    return 0;
}