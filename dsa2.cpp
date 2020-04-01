#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	for(int i=0; i<t; i++)
	{
		int n, n1 = 0;
		cin>>n;
		int digit;
		int d = n;
		while(d != 0)
		{
			digit = d%10;
			n1 = n1*10 + digit;
			d =d/10;
		}
		cout<<n1<<endl;	
	}
	
}