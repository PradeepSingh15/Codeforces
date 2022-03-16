#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int mcount = 0, ccount = 0;
    while(n--)
    {
        int m, c;
        cin>>m>>c;
        if(m > c)
           mcount++;
        else if(m < c)
           ccount++;
        else
        {
            mcount++;
            ccount++;
        }
    }
    if(mcount > ccount)
       cout<<"Mishka"<<endl;
    else if (mcount < ccount)
       cout<<"Chris"<<endl;
    else
       cout<<"Friendship is magic!^^"<<endl;
    

    return 0;
}