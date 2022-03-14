#include<bits/stdc++.h>
using namespace std;

bool isPrime(long long int n)
{
    if(n <= 1)
       return false;
    for(int i=2; i<n; i++)
       if(n%i == 0)
          return false;
          
    return true;
}

int main()
{
    long long int n, i;
    cin>>n;
    for(i=4; i<=n-4; i++)
    {
        long long int t = n-i;
        if(isPrime(t) || isPrime(i))
           continue;
        else
        {
            cout<<i<<" "<<t;
            break;
        }
    }
    
    return 0;
}