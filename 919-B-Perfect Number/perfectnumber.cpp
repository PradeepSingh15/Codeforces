#include<iostream>
using namespace std;
main()
{
    long long int n,r,i,s,a,b,c,j;

    while(cin>>n)
    {
        c=0;
        for(i=19;; i++)
        {
            j=i,s=0;
            while(j>0)
            {
                s+=j%10;
                j/=10;
            }
            if(s==10)
                c++;
            if(c==n)
                break;
        }
        cout<<i<<endl;
    }

}
