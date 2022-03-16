#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	 cin>>t;
	 while( t--)
	 {
	 	int n; cin>>n;
	 	string s;
	 	cin>>s;
	 	vector<int>v(26,0);
	 	v[s[0]-'A'] = 1;
	 	int res = 0;
	 	for(int i = 1; i < s.size(); i++)
	 	{
	 		if(s[i]==s[i-1]) continue;
	 		else{
	 			if(v[s[i]-'A']>0)
	 			{
	 				res = 1;
	 				break;
	 			}	
	 			v[s[i]-'A'] = 1;
	 		}
	 	}
	 	if( res == 0 )
	 		cout<<"YES"<<endl;
	 	else
	 		cout<<"NO"<<endl;
	 }
 
}