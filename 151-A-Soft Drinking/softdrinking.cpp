#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n, k, l, c, d, p, nl, np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    long long int t = (k*l)/nl;
    long long int s = c*d;
    long long int r = p/np;
    long long int x = min(t, min(s, r))/n ;
    cout<<x<<endl;
    
    return 0;
}