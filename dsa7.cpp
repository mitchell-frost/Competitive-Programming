#include<bits/stdc++.h>
using namespace std;

int main()
{
	int test, g, I, N, Q;
	cin>>test;
	for(int i=0; i<test; i++)
	{
		int h, t;
		cin>>g;
		for(int j=0; j<g; j++)
		{
			cin>>I>>N>>Q;
			int half = N/2;
			int half1 = (half+1);
			if(N % 2 == 0)
			{
				cout<<half<<endl;
			}
			else
			{
				if(I == 1)
				{
					t = half1;
					h = half;
				}
				else if(I == 2)
				{
					h = half1;
					t = half;
				}

				if(Q == 1)
					cout<<h<<endl;
				else if (Q == 2)
					cout<<t<<endl;
			}
		}
	}
}