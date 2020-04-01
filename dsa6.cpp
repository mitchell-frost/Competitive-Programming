#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t, n, output=0;
	cin>>t;
	for(int i=0; i<t; i++)
	{
		cin>>n;
		int c = 5;
		while((n/c) > 0)
		{
			output += (n/c);
			c *= 5;
		}
		cout<<output<<endl;
		output = 0;
	}
}