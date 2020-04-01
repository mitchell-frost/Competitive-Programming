#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	for(int i=0; i<t; i++)
	{
		string str, str2, str3;
		cin>>str;
		int l = str.length();
		
		str2 = str.substr(0, (l/2));

		if(l%2 == 0)
		    str3 = str.substr(l/2, l-1);
		else 
			str3 = str.substr((l/2)+1, l-1);

		sort(str2.begin(), str2.end());

		sort(str3.begin(), str3.end());

		if(str2 == str3)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}

}