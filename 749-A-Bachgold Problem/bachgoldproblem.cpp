#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int t = n/2;
    if(n%2 != 0){
        cout<<t<<endl;
        while(t > 1){
            cout<<2<<" ";
            t--;
        }
        cout<<3<<endl;
    }
    else{
        cout<<t<<endl;
        while(t != 0){
            cout<<2<<" ";
            t--;
        }
        cout<<endl;
    }
}