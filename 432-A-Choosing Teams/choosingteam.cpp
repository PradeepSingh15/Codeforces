#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin>>n>>k;
    int player, team=0;
    for(int i=0; i<n; i++)
    {
        cin>>player;
        if(player + k <= 5)
            team++;
    }
    
    cout<< team/3 <<endl;
    
    return 0;
}