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
        for(ll i=0;i<n;i++){
            cin>>a[i];
        }
        ll ans = 0;
        for(ll i=30;i>=0;i--){
            ll cnt = 0;
            for(ll j=0;j<n;j++){
                if(a[j]>=pow(2,i) and a[j]<pow(2,(i+1)))
                    ++cnt;
            }
            ans+= (cnt*(cnt-1))/2;
        }
        cout<<ans<<'\n';
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
//     ll n;
//     cin>>n;
//     ll a[n];
//     for(int i=0; i<n; i++)
//     {
//         cin>>a[i];
//     }
//     for (int j=1; j<29; j++)
//         {
//                 cout<<(1<<j)<<" "<<(1<<(j+1))<<'\n';
//         }
//     return 0;
// }