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
        for(int i=1; i<=n; i++)
        {
            cin>>a[i];
        }
        ll ans=a[1];
        for(int i=2; i<=n; i++)
        {
            ans=ans&a[i];
        }
        cout<<ans<<'\n';
    }
    
    return 0;
}