#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    int n, count = 0, untreated = 0;
    for(int i=0; i<t; i++)
    {
        cin>>n;
        if(n>0)
        {
            count += n;
        }
        else
        {
            if(count<1)
            {
                untreated++;
            }
            else
            {
                count--;
            }
        }
    }
    cout<<untreated<<endl;
    
    return 0;
}