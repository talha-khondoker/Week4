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
        ll n, b;
        cin>>n>>b;
        ll a[n];
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        ll ans=-1;
        for(int i=0; i<n; i++)
        {
            if((a[i]&b)==b)
            {
                ans&=a[i];
            }
        }
        if(ans==b) cout<<"YES"<<'\n';
        else cout<<"NO"<<'\n';
    }
    
    return 0;
}