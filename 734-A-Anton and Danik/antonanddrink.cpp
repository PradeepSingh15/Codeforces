#include <bits/stdc++.h>
using namespace std;

int main()
{
    char c;
    int w = 0, l = 0, n;
    cin>>n;
    
    for(int i=0; i<n; i++)
    {
        cin>>c;
        if(c == 'A')
           w++;
        else
           l++;
    }
    if(w > l)
      cout<<"Anton"<<endl;
    else if(w < l)
      cout<<"Danik"<<endl;
    else
       cout<<"Friendship"<<endl;
       
    
    return 0;
}