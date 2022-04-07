#include<bits/stdc++.h>
using namespace std;

void solve(){ 
    int attack, health, n;
    cin>>attack>>health>>n;
 
    vector<pair<int,int>> monster(n);
    
    for(int i=0; i<n; i++)
        cin>>monster[i].first;
    for(int i=0; i<n; i++)
        cin>>monster[i].second;
 
    sort(monster.begin(),monster.end());
    
    int i=0;
    while(i < n)
    {
 
        int round_to_destroy_monster = (monster[i].second+attack-1)/attack;
        int round_to_destroy_hero = (health+monster[i].first-1)/monster[i].first;
        
 
        if(round_to_destroy_hero < round_to_destroy_monster)
        {
            cout<<"NO"<<"\n";
            return ;
        }
 
        health -= round_to_destroy_monster * monster[i].first;
        
        
        i++;
        if(health <= 0)
        break;
    }
 
   if(i==n)
      cout<<"YES"<<"\n";
   else 
      cout<<"NO"<<"\n";
}

int main()
{
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}