#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
        
    int l = 0, r = n-1, sereja = 0, dima = 0;
    int j = 0;
    while(l <= r)
    {
        if(j % 2 == 0)
        {
            if(a[l] > a[r])
                sereja += a[l++];
            else
                sereja += a[r--];
        }
        else
        {
            if(a[l] > a[r])
                dima += a[l++];
            else
                dima += a[r--];
        }
        j++;
    }
    cout<<sereja<<" "<<dima<<endl;
}