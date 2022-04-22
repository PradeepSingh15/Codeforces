#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int n = s.size();
        int count = 1, curr_count = INT_MAX;
        for(int i=0; i<n; i++){
            if(i<n-1 && s[i] == s[i+1]){
                count++;
            }
            else{
                curr_count = min(curr_count, count);
                count = 1;
            }
        }
        if(curr_count == 1)
          cout<<"NO"<<endl;
        else
          cout<<"YES"<<endl;
    }
    
    return 0;
}