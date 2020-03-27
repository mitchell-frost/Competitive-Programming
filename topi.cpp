#include<bits/stdc++.h>
using namespace std;

#define ll long long

ll n;
ll x, y;

ll gcd(ll a, ll b){ 
    if (a == 0) 
        return b;  
    return gcd(b % a, a);  
 } 
  
   
// Function to return LCM of two numbers  
  ll lcm(ll a, ll b)  
 {  
    return (a*b)/gcd(a, b);  
 }   

int main()
{
	cin>>n;
	cin>>x>>y;
	ll g = lcm(x,y);
	ll v = n/g;
	cout<<v<<endl;
	return 0;
}