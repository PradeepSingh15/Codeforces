#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string s;
    unordered_map<string, int> data;
    while(n--)
    {
        cin>>s;
        if(data.count(s) == 0)
        {
            cout<< "OK" <<endl;
            data[s] = 1;
        }
        else
        {
            cout<<s<<data[s]<<endl;
            data[s] += 1;
        }
    }
    
    return 0;
}