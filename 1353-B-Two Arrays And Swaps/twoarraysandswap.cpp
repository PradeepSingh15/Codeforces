#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n, k;
        cin>>n>>k;
        int a[n], b[n];
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        
        for(int i=0; i<n; i++)
        {
            cin>>b[i];
        }
        
        sort(a, a+n);
        sort(b, b+n, greater<int>());
        
        for(int i=0; i<k; i++)
        {
            if(a[i] < b[i])
               swap(a[i], b[i]);
        }
        
        long long int res = 0;
        for(int i=0; i<n; i++)
        {
            res += a[i];
        }
        
        cout<<res<<endl;
    }
    
    return 0;
}