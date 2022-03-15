#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n, p;
        cin>>n;
        for(int i=2; i<n; i++)
        {
            p = pow(2, i)-1;
            if(n%p == 0)
            {
                cout<<n/p<<endl;
                break;
            }
        }
    }
    
    return 0;
}