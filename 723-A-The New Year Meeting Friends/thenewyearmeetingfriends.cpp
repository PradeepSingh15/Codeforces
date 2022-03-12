#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    cin>>a>>b>>c;
    int res = max(a, max(b, c));
    int res1 = min(a, min(b, c));
    if(a != res & a != res1)
        cout<<(res-a)+(a-res1)<<endl;
    else if(b != res & b != res1)
        cout<<(res-b)+(b-res1)<<endl;
    else
        cout<<(res-c)+(c-res1)<<endl;
    
    return 0;
}