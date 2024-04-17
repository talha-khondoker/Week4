#include <bits/stdc++.h>
#define ll long long
using namespace std;
vector<ll> pal;
void check_pal()
{
    ll mx=1<<15;
    for(int i=0; i<mx; i++)
    {
        string str=to_string(i);
        string rev_str=str;
        reverse(str.begin(), str.end());
        if(str==rev_str)
        {
            pal.push_back(i);
        }
    }
}
void solve()
{
    ll n;
        cin>>n;
        vector<ll> a(n);;
        unordered_map<ll, ll> freq;
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            freq[a[i]]++;
        }
        ll ans=0;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<pal.size(); j++)
            {
                if((a[i]^pal[j])<=a[i]) continue;
                if(freq.find(a[i]^pal[j]) != freq.end())
                {
                    ans =ans+ freq[a[i]^pal[j]];
                }
            }
        }
        
            for(auto it: freq)
            {
                ans+=((long long)it.second* (it.second+1))/2;
            }
        cout<<ans<<'\n';
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    check_pal();
    ll tc;
    cin>>tc;
    while(tc--)
    {
        solve();
    }
    return 0;
}