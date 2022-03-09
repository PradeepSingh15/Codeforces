#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k, n, w;
    long long int price = 0;
    cin>> k >> n >> w;
    
    for(int i=1; i<=w; i++)
        price += i*k;
        
    if(n >= price)
        cout<< 0 << endl;
    else
        cout<< price - n << endl;
}