#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, l, r;
    cin>>n>>l>>r;
    int a[n];
    a[0] = 1;
    for(int i=1; i<n; i++)
        a[i] = 2*a[i-1];
    
    int mini = 0, maxi = 0;
    for(int i=0; i<l; i++)
        mini += a[i];
        
    mini += (n-l);
    
    for(int i=0; i<r; i++)
        maxi += a[i];
        
    maxi += (n-r) * a[r-1];
    
    cout<<mini<<" "<<maxi<<endl;
    
    return 0;
}