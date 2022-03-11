#include<bits/stdc++.h>
using  namespace std;

int main()
{
    long long int k, r;
    cin>>k>>r;
    int i = 0;
    while (i <= 10)
    {
        i++;
        long long int h = k * i;
        if(h % 10 == 0 || h%10 == r)
           break;
    }
    
    cout<< i << endl;
    
    return 0;
}