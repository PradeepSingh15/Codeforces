#include<bits/stdc++.h>
using namespace std;

int main()
{
   long long int t;
   cin>>t;
   while(t--)
   {
       long long int n;
       cin>>n;
       if(ceil(log2(n)) == floor(log2(n)))
          cout<<"NO"<<endl;
       else
          cout<<"YES"<<endl;
   }
   return 0;
}