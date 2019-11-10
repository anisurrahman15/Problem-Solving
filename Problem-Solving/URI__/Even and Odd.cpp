#include<bits/stdc++.h>
using namespace std;
#define MAX 100001
int main ()
{
    long long int t,n,i,j=0,k=0,even[MAX],odd[MAX];
    cin>>t;
    for ( int i=0; i<t; i++)
    {
        cin>>n;
        if (n%2==0)
            even[j++]=n;
        else
            odd[k++]=n;
    }

    sort(even,even+j);
    sort(odd,odd+k);

    for ( int i=0; i<j; i++)
    {
        cout<<even[i]<<endl;
    }
    for ( int i=k-1; i>=0; i--)
    {
        cout<<odd[i]<<endl;
    }



    return 0;
}
