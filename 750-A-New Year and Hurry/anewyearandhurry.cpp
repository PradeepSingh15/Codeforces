#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin>>n>>m;
    int timee = 240-m;
    int i = 1, test = 5*1;
    int count = 0;
    while((test <= timee) & i <= n)
    {
        i++;
        test += (5*i);
        count++;
    }
    
    cout<<count<<endl;
    
    return 0;
}