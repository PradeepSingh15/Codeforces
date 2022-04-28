#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int a = 0, b = 0;
        for(int i=0; i<(int)s.size(); i++){
            if(s[i] == 'A')
               a++;
            else{
                b++;
                if(b > a)
                   break;
            }
        }
        if(((s[0] == 'A') && (s[(s.size())-1] == 'B')) && (a >= b))
           cout<<"Yes"<<endl;
        else
           cout<<"No"<<endl;
    }
    
    return 0;
}