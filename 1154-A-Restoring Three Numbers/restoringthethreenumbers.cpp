#include<bits/stdc++.h>
using  namespace std;

int main()
{
    long long int a,b,c,d, res;
    cin>>a>>b>>c>>d;
    res = max(a, max(b, max(c, d)));
    
    if (a == res)
       cout<< (res-b) <<" "<< (res-c) <<" "<< (res-d) << endl;
    if (b == res)
       cout<< (res-a) <<" "<< (res-c) <<" "<< (res-d) << endl;
    if (c == res)
       cout<< (res-a) <<" "<< (res-b) <<" "<< (res-d) << endl;
    if (d == res)
       cout<< (res-a) <<" "<< (res-b) <<" "<< (res-c) << endl;
    
    return 0;
}