#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    string t;
    cin>>t;
    s.append(t);
    sort(s.begin(), s.end());
    string p;
    cin>>p;
    sort(p.begin(), p.end());
    if(s == p)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    
    return 0;
}