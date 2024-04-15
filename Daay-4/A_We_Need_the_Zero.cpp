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
        ll n;cin>>n;
        vector<ll>v(n);
        ll ans=0;
        for(auto &it:v)
        {
            cin>>it;
            ans^=it;
        }
        if (n%2==0)
        {
            if (ans==0)
            {
                cout<<0<<"\n";
            }
            else
            {
                cout<<-1<<"\n";
            }
        }
        else
        {
            cout<<ans<<"\n";
        }
    }
    return 0;
}

// #include <bits/stdc++.h>
// #define ll long long
// using namespace std;

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);
//     ll tc;
//     while (tc--)
//     {
//         ll n;
//         cin>>n;
//         vector<ll> a(n);
//         ll x=0;
//         for(int i=0; i<n; i++)
//         {
//             cin>>a[i];
//         }
//         for(int i=0; i<n; i++)
//         {
//             x^=a[i];
//         }
//         for(int i=0; i<n; i++)
//         {
//             a[i]^=x;
//         }
//         ll y=0;
//         for(int i=0; i<n; i++)
//         {
//             y^=a[i];
//         }
//         if(y==0)
//         {
//             cout<<x<<'\n';
//         }
//         else
//         {
//             cout<<-1<<'\n';
//         }
//     }
    
//     return 0;
// }