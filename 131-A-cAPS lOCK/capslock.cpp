#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    char p;
    int n = s.size(), c = 1;
    
    for(int i=1; i<n; i++)
    {
        if(islower(s[i]))
            c = 0;
    }
    
    if(c == 1)
    {
        for(int i=0; i<n; i++)
        {
            if(isupper(s[i]))
               p = tolower(s[i]);
            else
               p = toupper(s[i]);
            
            cout<< p ;
        }
    }
    else
       cout<< s << endl;
}