#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int r, g, b;
        cin>>r>>g>>b;
        if(r > g+b+1 || g > r+b+1 || b > g+r+1)
           cout<<"No"<<endl;
        else
           cout<<"Yes"<<endl;
    }
    
    return 0;
}