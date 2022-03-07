#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    int count = 0, res = INT_MIN, res1 = INT_MAX;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        if(i>0)
        {
            res = max(res, a[i-1]);
            res1 = min(res1, a[i-1]);
            if(a[i] > res)
            {
                count++;
            }
            if(a[i] < res1)
            {
                count++;
            }
        }
    }
    cout<<count<<endl;
    
    return 0;
}