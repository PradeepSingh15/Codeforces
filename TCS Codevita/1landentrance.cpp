#include <bits/stdc++.h>
using namespace std;

int tofindd(string a)
{
    string res = {};
        for(int i=0; i<(int)a.size(); i++)
        {
            if(isdigit(a[i]))
            {
                res += a[i];
            }
        }
        long long int x = stoi(res);
        
        return x;
}

int countvowel(string str)
{
    long long int vowels = 0;
 
    for (int i = 0; i < (int)str.size(); i++) 
    {
        char ch = str[i];
 
        if ( (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') ) 
        {
            ch = tolower(ch);
 
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                vowels++;
        }
    }
    return vowels;
}


bool isPrime(int n)
{
    if (n <= 1)  return false;

    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;
  
    return true;
}

string convtowords(int n)
{
    string ones[] = {"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
    
    string out = {};

    out += ones[n];
 
    return out;
}

int main()
{
    long long int t, n=0, sum = 0;
    cin>>t;
    string a[t], b[t];
    for(int i=0; i<t; i++)
    {
        cin>>a[i];
    }
    for(int i=0; i<t; i++)
    {
        cin>>b[i];
    }
    for(int i=0; i<t; i++)
    {
        long long int x = tofindd(a[i]);
        
        n += x*countvowel(a[i]);
        
        if(b[i] == "Happy")
        {
            sum += x*10;  
        }
        else if(b[i] == "Sad")
        {
            sum += x*5;
        }
        else if(b[i] == "Neutral")
        {
            sum += x*2;
        }
        else if(b[i] == "None")
        {
            sum += x*1;
        }
    }
    
    long long int pr;
    
    if(sum > n)
    {
        pr = floor(sum/n);
    }
    else
    {
        pr = floor(n/sum);
    }
    if(isPrime(pr))
    {
        cout<<"Yes "<<convtowords(pr)<<'\n';
    }
    else
    {
        cout<<"No "<<convtowords(pr)<<'\n';
    }
    
    
    return 0;
}