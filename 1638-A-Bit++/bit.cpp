#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, t = 0;
    cin>>n;
    string c;
    for(int i=0; i<n; i++)
    {
        cin>>c;
        if(c[1] == '+')
            ++t;
        else
          --t;
    }
    cout<< t << endl;
    
    return 0;
}
