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
        ll a,b;
        cin>>a>>b;
        // ll x=(a&b);
        //cout<<(a^x) +(b^x)<<'\n';
        cout<<(a^b)<<'\n';
    }
    
    return 0;
}