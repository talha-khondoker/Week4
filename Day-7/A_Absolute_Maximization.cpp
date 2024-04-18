#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll tc;
    cin>>tc;
    while (tc--)
    {
        ll n; 
        cin>>n;
        ll a[n];
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        ll mx=a[0];
        ll mn=a[0];
        for(int i=1; i<n; i++)
        {
            mx=mx|a[i];
            mn=mn&a[i];
        }
        cout<<mx-mn<<'\n';
    }
    
    return 0;
}