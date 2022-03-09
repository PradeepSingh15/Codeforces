#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    int a1 = 0, b1 = 0, c1 = 0;
    
    int n;
    cin>>n;
    
    for(int i=0; i<n; i++)
    {
        cin>> a >> b >> c;
        a1 += a;
        b1 += b;
        c1 += c;
    }
    
    if((a1 == 0) && (b1 == 0) && (c1 == 0))
       cout<<"YES"<<endl;
    else
       cout<<"NO"<<endl;
}