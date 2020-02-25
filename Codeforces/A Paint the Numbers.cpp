#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t,c=0,tem;
    vector<int>v;
    cin>>t;
    for ( int i=0; i<t; i++)
    {
        cin>>tem;
        v.push_back(tem);
    }
    sort(v.begin(),v.end());
    for ( int i=0; i<v.size(); i++)
    {
        for ( int j=i+1; j<v.size(); j++)
        {
            if (v[j]%v[i]==0)
            {
                v.erase(v.begin()+j);
                j--;
            }
        }
    }
    cout<<v.size()<<endl;



    return 0;
}
