#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, goal=0;
    cin>>n;

    string s, s1;
    while (n--)
    {
        if (goal != 0)
        {
            cin>>s;
            if (s == s1)
            {
                goal += 1;
            }
            else
            {
                goal -= 1;
            }
        }
        else
        {
            cin>>s1;
            goal = 1;
        }
    }
    cout<<s1<<endl;
    return 0;
}