#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        char c;
        cin>>s>>c;
        int found = 0;
        for (int i=0; i<s.size(); i++)
        {
            if(s[i]==c && i%2==0)
            {
                found = 1;
                break;
            } 
        }
        if(found == 1)
          cout<<"YES"<<endl;
        else
           cout<<"NO"<<endl;
    }
    
    return 0;
}