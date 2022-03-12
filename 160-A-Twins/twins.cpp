#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, sum = 0;
    cin>>n;
    vector<int> a(n);
    
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        sum += a[i];
    }
    sort(a.begin(), a.end());
    int twin1 = 0, coin1 = 0;
    for(int i=n-1; i>=0; i--)
    {
        twin1 += a[i];
        coin1++;
        if(twin1 > (sum / 2))
           break;
    }
    cout<<coin1<<endl;
    
    return 0;
}