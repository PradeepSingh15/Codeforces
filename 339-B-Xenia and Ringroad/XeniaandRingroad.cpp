#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n, m;
    cin>>n>>m;
    int ar[m];
    
    for(int i=0; i<m; i++)
    {
        cin>>ar[i];
    }
    
    long long int task = 0;
    task +=ar[0] - 1;
    
    for(int i=1; i<m; i++)
    {
        if(ar[i] < ar[i-1])
        {
            task += ((n-ar[i-1]) + ar[i]);
        }
        else if(ar[i] > ar[i-1])
        {
            task += (ar[i] - ar[i-1]);
        }
        else
        {
            task += 0;
        }
    }
    
    cout<< task << endl;
    
    return 0;
}