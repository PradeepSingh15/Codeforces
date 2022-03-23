#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int p;
    cin>>p;
    int x, y;
    vector<int> v;
    int count = 0;

    for(int i=0; i<p; i++)
    {
        cin>>x;
        v.push_back(x);
    }
    int q;
    cin >> q;
    for(int i=0; i<q; i++)
    {
        cin>>y;
        v.push_back(y);
    }
    
    int t = v.size();
    
    sort(v.begin(), v.end());

    for(int i=0; i<t; i++){
        if(v[i] != v[i+1]){
            count++;
        }
    }

    if(n == count){
        cout << "I become the guy." <<endl;
    }else{
        cout << "Oh, my keyboard!" << endl;
    }

    return 0;
}