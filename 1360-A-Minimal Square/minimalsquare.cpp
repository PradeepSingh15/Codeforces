#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a, b;
        cin>>a>>b;
        if(a > b)
        {
            b =  b+b;
            int t = (a > b)? a*a : b*b;
            cout<<t<<endl;
        }
        else
        {
            a = a+a;
            int t = (a > b)? a*a : b*b;
            cout<<t<<endl;
        }
    }
    
    return 0;
}