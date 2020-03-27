#include<bits/stdc++.h>
using namespace std;

int T, N;

int main()
{
	cin>>T;
	for(int i=0; i<T; i++)
	{
		cin>>N;
    	if(N < 10)
    	{
    		cout<<"What an obedient servant you are!"<<endl;
    	}
    	else
    	{
    		cout<<-1<<endl;
    	}
	}
}