#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, res = INT_MIN;
    cin>>a>>b>>c;
    
    res = max(res, a + b * c);
    res = max(res, a * (b + c));
    res = max(res, a * b * c);
    res = max(res, (a + b) * c);
    res = max(res, a + b + c);
    res = max(res, a * b + c);
    
    cout<<res<<endl;
    
    return 0;
}