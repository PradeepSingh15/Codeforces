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
        if(n%3 == 0 || n%3 == 2)
        {
            long long int i = 2;
            while (n != 0)
            {
                cout<<i;
                n = n-i;
                i = 3-i;
            }
        }
        if(n%3 == 1)
        {
            long long int i = 1;
            while(n != 0)
            {
                cout<<i;
                n = n-i;
                i = 3-i;
            }
        }
        cout<<endl;
    }
    
    return 0;
}