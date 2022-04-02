#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, l;
    cin>>n>>l;
    int ar[n];
    for(int i=0; i<n; i++)
    {
        cin>>ar[i];
    }
    
    sort(ar, ar+n);
    
    int d = max(ar[0], l-ar[n-1]) * 2;
    for(int i=0; i<n-1; i++)
    {
        d = max(d, ar[i+1] - ar[i]);
    }
    
    cout<<fixed<<setprecision(9)<<(double) d/2 <<endl;
    
    return 0;
}