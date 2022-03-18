#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int p, q;
    while(n--)
    {
        cin>>p>>q;
        if((2*p) > q)
        {
            cout<<"-1 -1"<<endl;
        }
        else
        {
            cout<<p<<" "<<2*p<<endl;
        }
    }
    
    return 0;
}