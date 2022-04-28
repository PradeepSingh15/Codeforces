#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int x, count = 0;
        for(int i=0; i<n; i++){
            cin>>x;
            count += x-1;
        }
        if(count%2 == 1)
           cout<<"errorgorn"<<endl;
        else
           cout<<"maomao90"<<endl;
    }
    
    return 0;
}