#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin>>n>>m;
    int a[m];
    for(int k=0; k<m; k++)
    {
        cin>>a[k];
    }
    
    sort(a, a+m);
    
    int res = a[n-1] - a[0];
    for (int i = 1; i <= m - n; ++i)
    {
        res = min(res, a[i+n-1] - a[i]);
    }
    cout << res << endl;
    
    return 0;
}