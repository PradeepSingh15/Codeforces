#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n, sum1 = 0, sum2 = 0, t;
        cin>>n;
        long long int d = n/2;

        if(d%2 == 0)
        {
            cout<<"YES"<<endl;
            for(int i=2; i<=n; i+=2)
            {
                cout<<i<<" ";
                sum1+=i;
            }
            for(int i=1; i<n-2; i+=2)
            {
                cout<<i<<" ";
                sum2+=i;
            }
            cout<<sum1-sum2<<endl;
        }
        else
          cout<<"NO"<<endl;
        
    }
    
    return 0;
}