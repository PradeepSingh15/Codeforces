#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int low = INT_MAX;
    int high = INT_MIN;
    int li = 0;
    int hi = 0;
    int x;
    
    for(int i=0; i<n; i++)
    {
        cin>>x;
        if(x > high)
        {
            high = x;
            hi = i;
        }
        if(x <= low)
        {
            low = x;
            li = i;
        }
    }
    
    if(li > hi)
    {
        cout<<(hi - 1) + (n - li);
    }
    else
    {
        cout<<(hi-1) + (n - li) - 1;
    }
    
    return 0;
}