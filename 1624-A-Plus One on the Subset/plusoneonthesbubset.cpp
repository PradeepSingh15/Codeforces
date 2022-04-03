#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n, res = INT_MIN, ans = INT_MAX;
        cin>>n;
        int a[n];
        for(int i=0; i<n; i++){
            cin>>a[i];
            res = max(res, a[i]);
            ans = min(ans, a[i]);
        }
        cout<<res-ans<<endl;
    }
}