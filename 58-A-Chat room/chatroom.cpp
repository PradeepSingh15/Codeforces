#include <bits/stdc++.h>
using namespace std;

int main ()
{
    string s, a = "hello";
    cin>>s;
    int count = 0, j = 0;
    for(int i = 0; i<s.size(); i++)
    {
        if(s[i] == a[j])
        {
            j++;
            count++;
            if(count == 5)
            {
                cout<<"YES"<<endl;
                return 0;
            }
        }
        else
          continue;
    }
    
    cout<<"NO"<<endl;
    
    return 0;
}