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
		ll val=0;
		for(int i=0; i<30; i++)
		{
			if(((n>>i)&1) == 1)
			{
				val=i;
			}
		}
		cout<<(1<<val)-1<<"\n";
    }
    
    return 0;
}