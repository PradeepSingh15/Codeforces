#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, res = INT_MAX;
        cin>>n;
        int a[n];
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        
        sort(a, a+n);
        
        int j=1;
        for(int i=0; i<n-1; i++)
        {
            res = min(res, a[j] - a[i]);
            j++;
        }
        
        cout<<res<<endl;
    }
    
    return 0;
}