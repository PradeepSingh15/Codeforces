#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n;
        cin>>n;
        long long int a[n], b[n];
        long long int amin = 1000000001, bmin = 1000000001;
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            amin =  min(amin, a[i]);
        }
        for(int i=0; i<n; i++)
        {
            cin>>b[i];
            bmin = min(bmin, b[i]);
        }
        
        long long int d1 = 0;
        
        for(int i=0; i<n; i++)
        {
            d1 += max(a[i]-amin, b[i]-bmin);
        }
        
        cout<<d1<<endl;
    }
    
    
    return 0;
}