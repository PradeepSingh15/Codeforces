#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a, b, c, count = 0;
    for(int i=0; i<n; i++)
    {
        cin>> a >> b >> c;
        if((a == 1 && b == 1 && c == 1) || (a == 1 && b == 1 && c == 0) || (a == 1 && b == 0 && c == 1) || (a == 0 && b == 1 && c == 1))
           count++;
        else
          continue;
    }
    cout<<count;
    
    return 0;
}