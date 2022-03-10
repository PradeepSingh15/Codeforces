#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a, b;
        cin>>a>>b;
        int t = abs(b-a);
        int x = t%10;
        if(t == 0)
           cout<<"0"<<endl;
        else{
            if(x == 0)
               cout<< t/10 <<endl;
            else
               cout<< t/10 +1 <<endl;
        }
        
    }
    
    return 0;
}