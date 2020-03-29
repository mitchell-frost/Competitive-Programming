#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	
	for(int j=0; j<t; j++)
	{
        int count = 0;
		int h, k;
		cin>>h>>k;

		vector<int> v;
		vector<int> res;

    	while (h > 0)  
    	{ 
        	v.push_back(h % 2); 
        	h = h / 2; 
    	} 
 
    	for (int i = 0; i < v.size(); i++)  
    	{ 
        	if (v[i] == 1)  
        	{ 
            	if(pow(2, i) == k)
                {
                    cout<<"Hell"<<endl;
                    count++;
                    break;
                }
            	else
            		continue;
        	} 
		}

        if(count>0)
            continue;
        else
        {
            cout<<"Marry"<<endl;
        }

    }
}

