#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, m = 0, pas = 0;
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>a>>b;
        pas = (pas - a) + b;
        m = max(m, pas);
    }
    
    cout<<m<<endl;
    
    return 0;
}