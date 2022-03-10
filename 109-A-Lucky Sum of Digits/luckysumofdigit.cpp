#include<bits/stdc++.h>
using namespace std;

int main()
{ 
    bool flag = false;
    long long int n;
    cin>>n;
    if(n < 4)
    {
        cout<<"-1";
        return 0;
    }
   for (int i=n/7; i>= 0; i--) 
   {
       int p = n - (i * 7);
       if (p % 4 == 0) 
       {
           flag = true;
           for (int j=0; j<p/4; j++)
               cout<<4;
           for (int k=0; k<i; k++) 
               cout<<7;
           break;
       }
   }
   
    if(!flag) 
       cout<<-1<<endl;
   
   return 0;

}