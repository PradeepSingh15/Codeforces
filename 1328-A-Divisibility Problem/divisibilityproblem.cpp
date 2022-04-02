#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a, b;
        cin>>a>>b;
        int count = a%b;
        if(count != 0)
        {
            cout<<(b-count)<<endl;
        }
        else
        {
            cout<< 0 <<endl;
        }
        
    }
    
    return 0;
}