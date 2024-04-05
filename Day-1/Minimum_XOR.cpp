#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll tc;
    cin>>tc;
    while(tc--)
    {
        ll n; 
        cin>>n;
        ll a[n];
        ll total=0;
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            total^=a[i];
        }
        ll ans=total;
        for(int i=0; i<n; i++)
        {
            ans=min(ans, (total^a[i]));
        }
        cout<<ans<<'\n';
    }
    return 0;
}