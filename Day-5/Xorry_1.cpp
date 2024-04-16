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
        ll x;
        cin>>x;
        ll a=0, b=0, bit_pos=0;
        while ((1<<bit_pos)<=x)
        {
            bit_pos++;
        }
        ll msb= 1 << (bit_pos-1);
        b=msb;
        a=b^x;
        cout<<a<<" "<<b<<'\n';
    }
    
    return 0;
}