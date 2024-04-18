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
        ll x=log2(n-1);
        ll y=1<<x;
        for(int i=n-1; i>=y; i--)
        {
            cout<<i<<" ";
        }
        for(int i=0; i<y; i++)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}