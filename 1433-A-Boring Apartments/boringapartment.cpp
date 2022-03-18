#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,d=0;
        cin>>x;
        int a =x%10;
        string s=to_string(x);
        
        for(int i=0; i<s.size(); i++)
             d += 1+i;
        
        cout<<((a-1)*10) + d<<endl;
    }
    
    return 0;
}