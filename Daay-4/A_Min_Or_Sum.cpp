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
        ll ans=0;
        for(int i=0; i<n; i++)
        {
            ll x;
            cin>>x;
            ans|=x;
        }
        cout<<ans<<'\n';
    }
    
    return 0;
}