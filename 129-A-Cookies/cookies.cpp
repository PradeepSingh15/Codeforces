#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n], sum = 0, esum = 0, osum = 0;
    for(int i=0; i<n; i++){
        cin>>a[i];
        sum += a[i];
        if(a[i]%2 == 0)
            esum++;
        else
           osum++;
    }
    if(sum%2 == 0)
       cout<<esum<<endl;
    else
       cout<<osum<<endl;
    
    return 0;
}