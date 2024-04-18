#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll n, m,k;
    cin>>n>>m>>k;
    ll f[m+1];
    for(int i=0; i<=m; i++)
    {
        cin>>f[i];
    } 
    ll ans=0;
    for (int i = 0; i < m; i++)
    {
        int cnt = 0;
        for (int j = 0; j < n; j++)
        {
            if (((f[i] >> j) & 1) != ((f[m] >> j) & 1))
            cnt++;
        }
        if(cnt <= k)
        {
            ans++;
        }
    }
    cout<<ans<<'\n';
    return 0;
}

