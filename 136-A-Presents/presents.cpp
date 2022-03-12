#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int k, ar[n-1];
    for(int i=1; i<=n; i++)
    {
        cin>>k;
        ar[k] = i;
    }
    for(int i=1; i<=n; i++)
       cout<<ar[i]<<" ";
    
    return 0;
}