#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        unordered_map<int, int> m;
        int a[n];
        for(int i=1; i<=n; i++)
        {
            cin>>a[i];
        }
        for(int i=1; i<=n; i++)
        {
            if(i>1)
            {
                if(a[i] == a[i-1])
                   continue;
                else
                {
                    if(a[i] != a[i+1])
                    {
                        cout<<(i)<<endl;
                        break;
                    }
                    else
                    {
                        cout<<(i-1)<<endl;
                        break;
                    }
                }
            }
        }
    }
    
    return 0;
}