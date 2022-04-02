#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, x, count = 0;
    int odd = 0, even = 0;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cin >> x;
        if (x % 2 != 0)
        {
            count++;
            odd = i;
        }
        else
        {
            count--;
            even = i;
        }
    }

    if(count < 0)
    {
        cout<<odd;
    }
    else
    {
        cout<<even;
    }

    return 0;
}