#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n, B, x, y, sum = 0;
        cin>>n>>B>>x>>y;
        int a[n];
        a[0] = 0;
        for(int i=1; i<=n; i++)
        {
            if(a[i-1]+x <= B)
               a[i] = a[i-1] + x;
            else
               a[i] = a[i-1] - y;
               
            sum += a[i];
        }
        
        cout<<sum<<endl;
        
    }
}