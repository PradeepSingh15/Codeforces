#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, sum = 0;
    cin>>n>>m;
    vector<int> a(n);
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        if(a[i] <= m)
          sum += 1;
        else
          sum += 2;
    }
    cout<< sum <<endl;
    
    return 0;
}