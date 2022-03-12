#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string b, a = {};
        cin>>b;
        for(int i=0; i<(int)b.size()-1; i++)
        {
            if(i == 0)
                a +=b[i];
            if(b[i] == b[i-1]){
                a +=b[i];
                i++;
            }
        }
        a += b[b.size()-1];
        cout<<a<<endl;

    }
    
    return 0;
}