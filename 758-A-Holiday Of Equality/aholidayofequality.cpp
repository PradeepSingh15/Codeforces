#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    long long int res = 0;
    int m = INT_MIN;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        m = max(m, a[i]);
    }
    
    
    for(int i=0; i<n; i++)
    {
        res += m - a[i];
    }
    
    cout<< res <<endl;
    
    return 0;
}