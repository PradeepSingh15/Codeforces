#include<bits/stdc++.h>
using namespace std;

bool isPrime(long long int n)
{
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;

    if ((n%2 == 0) || (n%3 == 0))
        return false;
  
    for (int i=5; i*i<=n; i=i+6)
        if ((n%i == 0) || (n%(i+2) == 0))
            return false;
  
    return true;
}

int main()
{
    long long int t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        long long int n;
        cin>>n;
        if(n%2 == 0 && n != 4)
        {
            cout<<"NO"<<endl;
        }
        else if(n == 4)
        {
            cout<<"YES"<<endl;
        }
        else if(double(sqrt(n)) == int (sqrt(n)))
        {
            long long int a = sqrt(n);
            if(isPrime(a))
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
        else
        {
            cout<<"NO"<<endl;
        }
        
    }
    
    return 0;
}