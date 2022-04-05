#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin>>q;
    while(q--){
        int n, k;
        cin>>n>>k;
        int a[n], res = INT_MIN, ans = INT_MAX;
        for(int i=0; i<n; i++){
            cin>>a[i];
            res = max(res, a[i]);
            ans = min(ans, a[i]);
        }
        //cout<<res<<" "<<ans;
        
        ans += k;
        
        if((res-ans) > k)
           cout<<-1<<endl;
        else
           cout<<ans<<endl;
    }
    
    return 0;
}