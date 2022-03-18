#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n, ans = 0, s2 = 0, s3 = 0;
        cin>>n;
        while(n%2 == 0)
        {
            s2++;
            n /= 2;
        }
        while(n%3 == 0)
        {
            s3++;
            n /= 3;
        }
        
        if(n == 1)
        {
            if(s2 <= s3)
            {
                ans = min(s2, s3);
                s2 -= ans;
                s3 -= ans;
                ans += s3 * 2;
                cout<<ans<<endl;
            }
            else
                cout<<-1<<endl;
        }
        else
            cout<<-1<<endl;
    }
    
    return 0;
}