#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[5] = {0}, j;
    
    for(int i=0; i<n; i++)
    {
        cin>>j;
        a[j]++;
    }
    
    int taxi = 0;
    taxi = a[4] + a[3] + a[2]/2;
    a[1] -= a[3]; 
    
    if(a[2]%2 == 1)
    {
        taxi += 1;
        a[1] -= 2;
    }
    
    if(a[1] > 0)
    {
        taxi += (a[1] + 3)/4;
    }
    
    cout<< taxi <<endl;
    
    return 0;
}