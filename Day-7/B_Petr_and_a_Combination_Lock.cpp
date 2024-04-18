#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin>>n;
    vector<ll> a(n);
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    int b=(1<<n);
    bool flag=true;
    for(int i=0; i<b; i++)
    {
        ll sum=0;
        for(int j=0; j<n; j++)
        {
            if(i&(1<<j)) sum+=a[j];
            else sum-=a[j];
        }
        if(sum%360==0)
        {
            cout<<"YES"<<'\n';
            return 0;
        }
    }
    cout<<"NO"<<'\n';
    return 0;
}