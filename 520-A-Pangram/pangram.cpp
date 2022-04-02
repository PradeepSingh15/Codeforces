#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    char j = 'a';
    string s;
    cin>>s;
    for(int i=0; i<s.size(); i++)
    {
        s[i] = tolower(s[i]);
    }
    
    if(s.size() >= 26)
    {
        for(int i=0; i<26; i++)
        {
            if(s.find(j) != -1)
            {
                j++;
            }
            else
            {
                cout<<"NO"<<endl;
                return 0;
            }
        }
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    
    return 0;
}