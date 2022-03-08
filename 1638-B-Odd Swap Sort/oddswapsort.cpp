#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> odd, even;
        for(int i=0; i<n; i++)
        {
            int x;
            cin>>x;
            if(x % 2 == 0)
               even.push_back(x);
            else
               odd.push_back(x);
        }
        
        vector<int> sortedOdd = odd, sortedEven = even;
        sort(sortedOdd.begin(), sortedOdd.end());
        sort(sortedEven.begin(), sortedEven.end());
        bool is = true;
        
        for(int i=0; i<(int)odd.size(); i++)
        {
            if(sortedOdd[i] != odd[i])
            {
                is = false;
                break;
            }
        }
        
        for(int i=0; i<(int)even.size(); i++)
        {
            if(sortedEven[i] != even[i])
            {
                is = false;
                break;
            }
        }
        
        cout<<(is ? "YES\n" : "NO\n");
    }
    
    return 0;
}