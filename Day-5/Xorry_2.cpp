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
        ll a=1, b=0;
        ll cnt=0;
        while (a*2<=n)
        {
            a=a*2;
            cnt++;
        }
        ll ans=1;
        bool flag=false;
        for(int i=cnt-1; i>=0; i--)
        {
            if((n&1<<i))
            {
                b=b|(1<<i);
                flag=true;
            }
            else
            {
                if(flag) ans=ans*2;
            }
        }
        cout<<ans<<'\n';
    }
    
    return 0;
}