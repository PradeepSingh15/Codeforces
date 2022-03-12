#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n;
    cin>>n;
    int ar[12] = {4,7,47,44,74,444,447,474,477,777,774,744};
    for(int i=0; i<12; i++)
    {
        if(n % ar[i] == 0)
        {
            cout<<"YES"<<endl;
            return 0;
        }
        else
           continue;
    }
    
    cout<<"NO"<<endl;
    
    return 0;
}