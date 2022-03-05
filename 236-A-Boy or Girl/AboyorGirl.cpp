#include<bits/stdc++.h>
using namespace std;

int main()
{
    string username;
    cin>>username;
    int count = 0;
    for (int i = 0; i < username.size() - 1; i++)
    {
        for (int j = i + 1; j < username.size(); j++)
        {
            if (username[i] == username[j])
            {
                count++;
                break;
            }
        }
    }
    if ((username.size() - count) % 2 == 0)
    {
        cout << "CHAT WITH HER!" << endl;
    }
    else
    {
        cout << "IGNORE HIM!" << endl;
    }
    
    return 0;
}