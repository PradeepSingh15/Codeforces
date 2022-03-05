#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    unordered_set<char> d;
    for(int i=0; i<s.size(); i++)
    {
        if((s[i] >= 'a') && (s[i] <= 'z'))
        {
            d.insert(s[i]);
        }
    }
    
    cout<<d.size()<<endl;
    
    return 0;
}