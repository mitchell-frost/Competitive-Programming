#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, k, n, l;

    cin>>t;

    for(int i=0; i<t; i++)
    {
        cin>>n>>k;
        string a[n];
        int b[n] = {};
        for(int j=0; j<n; j++)
        {
            cin>>a[j];
        }
        for(int j=0; j<k; j++)
        {
            cin>>l;
            string k[l];
            for(int m=0; m<l; m++)
            {
                cin>>k[m];
            }
            for(int m=0; m<n; m++)
            {
                for(int c=0; c<l; c++)
                {
                    if(a[m]==k[c])
                    {
                        b[m]++;
                        break;
                    }
                }
            }
        }

        for(int j=0; j<n; j++)
        {
            if(b[j]==0)
            {
                cout<<"NO ";
            }
            else
            {
                cout<<"YES ";
            }

        }
        cout<<endl;
    }
    return 0;
}