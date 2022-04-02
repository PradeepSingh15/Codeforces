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
        int a[n];
    
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            if(i>=1)
            {
                a[0] = a[0] | a[i];
            }
        }
        cout<< a[0] << endl;
    }
    
    return 0;
}
