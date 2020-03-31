#include<bits/stdc++.h>
using namespace std;

int t, n;

int main()
{
	cin>>t;
	for(int j=0; j<t; j++)
	{
		cin>>n;
		int a[n] = {0};
		
		int v[n], s[n], p[n];

		for(int i=0; i<n; i++)
		{
			cin>>s[i]>>p[i]>>v[i];
		}

		int piv = a[0];

		for(int i=0; i<n; i++)
		{
				a[i] = (p[i]/(s[i]+1))*v[i];
				if (a[i] > piv)
					piv = a[i];
		}
	
		cout<<piv<<endl;
	}

	return 0;
}