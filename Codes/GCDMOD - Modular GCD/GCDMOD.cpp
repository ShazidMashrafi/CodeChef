#include <bits/stdc++.h>
using namespace std;
#if defined(LOCAL) && !defined(ONLINE_JUDGE)
#include "debug.h"
#else
#define dbg(...)
#endif
#define  ll  long long
#define  endl  '\n'
#define  ff  first
#define  ss  second
#define  pb  push_back
#define  sz(x)  (int)(x).size()
#define  all(x)  x.begin(), x.end()
#define  Dpos(n) fixed << setprecision(n)
#define  yn(f)  f? cout<<"YES\n":cout<<"NO\n"
#define  FAST  (ios_base::sync_with_stdio(false), cin.tie(nullptr));
ll power128(ll x, ll y, ll m) {
    ll ans = 1;
    x %= m;
    while (y) {
        if (y & 1) ans = (ll)((__int128)ans * x % m);
        x = (ll)((__int128)x * x % m);
        y >>= 1;
    }
    return ans;
}

const ll MOD = 1e9 + 7;

void solve()
{
    ll a, b, n;
    cin >> a >> b >> n;

    if (a == b) {
        ll ans = (2LL * power128(a, n, MOD)) % MOD;
        cout << ans << endl;
        return;
    }

    ll d = a - b;
    ll rem = (power128(a, n, d) + power128(b, n, d)) % d;
    ll ans = gcd(d, rem);
    cout << ans % MOD << endl;
}

signed main()
{
    FAST;
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    int TCS = 1;
    cin >> TCS;
    for (int TC = 1; TC <= TCS; ++TC)
    {
        // cout<<"Case "<<TC<<": ";
        solve();
    }
}