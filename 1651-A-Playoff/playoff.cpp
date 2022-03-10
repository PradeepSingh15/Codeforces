#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int n, result = 1;
        cin>>n;
        while (n != 0) 
        {
            result *= 2;
            --n;
        }
        cout << result - 1 <<endl;
    }
    
    
    return 0;
}