#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    string s, s1;
    cin>>s;
    n = s.length();
    for(int i=0; i<n; i++)
    {
        if(s[i] == 'a' || s[i] == 'A' || s[i] == 'o' || s[i] == 'O' || s[i] == 'y' || s[i] == 'Y' || s[i] == 'e' || s[i] == 'E' || s[i] == 'u' || s[i] == 'U' || s[i] == 'i' || s[i] == 'I')
           continue;
        else
        {
            s1 += '.';
            s1 += tolower(s[i]);
        }
    }
    
    cout<<s1;

    return 0;
}