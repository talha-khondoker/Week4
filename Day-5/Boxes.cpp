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
        sort(a,a+n,greater<ll>());
        ll  val=0;
        ll  ans=0;
        for(ll  i=0;i<n;i++)
        {
            if(val<a[i])
            {
                val=0; ans++;
            }
            val^=a[i];
        }
        cout<<ans<<"\n";
    }
    
    return 0;
}