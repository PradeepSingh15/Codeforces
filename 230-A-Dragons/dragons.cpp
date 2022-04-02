#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, s;
    cin>>s>>n;
    pair<int, int> p[n];
    for(int i=0; i<n; i++)
    {
        cin>>p[i].first>>p[i].second;
    }
    sort(p, p+n);
    
    for(int i=0; i<n; i++)
    {
        if(s > p[i].first)
        {
            s += p[i].second;
        }
        else
        {
            cout<<"NO"<<endl;
            return 0;
        }
    }
    
    cout<<"YES"<<endl;
    
    
    
    return 0;
}