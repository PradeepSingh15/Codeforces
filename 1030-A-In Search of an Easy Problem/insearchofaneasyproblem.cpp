#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int x;
    for(int i=0; i<n; i++)
    {
        cin>>x;
        if(x == 0)
          continue;
        else
        {
            cout<<"HARD"<<endl;
            return 0;
        }
    }
    cout<<"EASY"<<endl;
    
    return 0;
}