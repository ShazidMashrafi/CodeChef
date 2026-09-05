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
ll power(ll x,ll y,ll m=LLONG_MAX) {ll ans=1;x%=m;while(y){if(y&1)ans=(ans*x)%m;x=(x*x)%m;y>>=1;}return ans;}

void solve()
{
    ll n;
    cin >> n;
    vector<ll>v(n + 1), pre(n + 1, 0), diff(n + 2, 0);
    for(ll i = 1; i <= n; ++i) {
        cin >> v[i];
        pre[i] = pre[i - 1] + v[i];
    }
    for(ll j = 1; j <= n; ++j) {
        if(j > 1) {
            ll target = pre[j - 1] - v[j];
            ll l = lower_bound(pre.begin() + 1, pre.begin() + j, target) - pre.begin();
            diff[l] += 1;
            diff[j] -= 1;
        }
        if(j < n) {
            ll target = pre[j] + v[j];
            ll idx = upper_bound(pre.begin() + j + 1, pre.end(), target) - pre.begin();
            ll r = min(n, idx);

            diff[j + 1] += 1;
            diff[r + 1] -= 1;
        }
    }
    for(int i = 1; i <= n; ++i) {
        diff[i] += diff[i - 1];
        cout << diff[i] << " ";
    }
    cout << endl;

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