#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int x, y, n;
        cin>>x>>y>>n;
        long long int d = n / x ;
        long long int ans = x * d + y;
        if (ans > n)
        {
            ans -= x;
        }
        cout<<ans<<endl;
    }
    return 0;
}