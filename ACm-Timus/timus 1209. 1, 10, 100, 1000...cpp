#include<bits/stdc++.h>
using namespace std;
#define M 2147483648
vector<int>v;
void operation()
{
    int c=1;
    long long n=1;
    while(n<=M)
    {
        v.push_back(n);
        n+=c;
        c++;
    }
}


int main ()
{
operation();
int n;
    int t;
    cin>>t;
    while(t--)
    {cin>>n;
    if (binary_search(v.begin(),v.end(),n))
    {
        cout<<1<<" ";
    }
    else
    {
        cout<<0<<" ";
    }

    }

}
