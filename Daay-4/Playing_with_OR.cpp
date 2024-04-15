#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define mod 1000000007

void solve() {
	

}

int main() {
	int t = 1;
	cin >> t;
	while(t--) 
	{
		ll n, k;
	cin >> n >> k;

	ll arr[n];
	for(ll i = 0; i < n; i++) cin >> arr[i];

	ll odd = 0;
	for(ll i = 0; i < k; i++) {
		if(arr[i] % 2 != 0) odd++;
	}

	ll ans = 0;
	if(odd > 0) ans++;

	for(ll i = k; i < n; i++) {
		if(arr[i - k] % 2 != 0) odd--;
		if(arr[i] % 2 != 0) odd++;
		if(odd > 0) ans++;
	}

	cout << ans << '\n';
	}
	return 0;
}