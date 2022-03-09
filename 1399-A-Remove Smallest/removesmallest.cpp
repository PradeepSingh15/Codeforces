#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        if(n == 1)
        {
            cout<<"Yes"<<endl;
            continue;
        }
        
        sort(a, a+n);
        
        int flag = 1;
        for(int i=1; i<n; i++)
        {
            if((a[i] - a[i-1]) > 1)
            {
                flag = 0;
                break;
            }
        }
        if(flag == 1)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
        
    }
    
    return 0;
}