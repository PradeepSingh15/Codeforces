#include <bits/stdc++.h>
using namespace std;

int main()
{
   string s;
   int r,g,b,R,G,B,t;
   cin>>t;
   while(t--)
   {
       cin>>s;
       for(int i=0; i<s.size(); i++)
       {
           if(s[i] == 'r')
              r = i;
           if(s[i] == 'R')
              R = i;
           if(s[i] == 'g')
              g = i;
           if(s[i] == 'G')
              G = i;
           if(s[i] == 'b')
              b = i;
           if(s[i] == 'B')
              B = i;
       }
       if(R>r && G>g && B>b)
           cout<<"YES"<<endl;
       else
          cout<<"NO"<<endl;
   }
   
   return 0;
}