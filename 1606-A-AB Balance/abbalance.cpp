#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        if(s.size() == 1)
           cout<<s<<endl;
        else if(s[0] == s[s.size()-1])
           cout<<s<<endl;
        else
           cout<<s.substr(0, s.size()-1)<<s[0]<<endl;
    }
    
    return 0;
}