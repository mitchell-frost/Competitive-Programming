#include<bits/stdc++.h>
using namespace std;

int s, i;
string city;
string bad = "x";

int main()
{
    cin>>city;
    s = city.length();

    size_t found = city.find(bad);
	if (found != string::npos)
		cout <<"Not Safe" << endl;
    else
    cout<<"Safe"<<endl;

}