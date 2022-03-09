#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int i;
    vector<int> a;
    
    for(i=0; i<s.length(); i++)
    {
        if(s[i] == '+')
           continue;
        else
           a.push_back(s[i]-'0');
    }
    
    int n = a.size();
    sort(a.begin(), a.end());
    
    for(i=0; i<n; i++)
    {
        cout<<a[i];
        if(i == n-1)
           break;
        cout<<"+";
    }
}