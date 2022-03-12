#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,a,b;
	cin>>n>>m>>a>>b;
	int cost=0;
 
    if(m*a<=b){
        cost=n*a;
    }	
 
    else{
        cost=(n/m)*b+min((n%m)*a,b);
    }
	
	cout<<cost;
    
    return 0;
}