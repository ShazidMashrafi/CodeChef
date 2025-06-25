#include <bits/stdc++.h>
using namespace std;
#ifdef ONLINE_JUDGE
#define dbg(...)
#else
#include <debug.h>
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
    ll n, m;
    cin >> n >> m;
    map<string, string> mp;
    while(n--)
    {
        string chef, country;
        cin >> chef >> country;
        mp[chef] = country;

    }

    map<string, ll> countries;
    map<string, ll> chefs;
    while(m--)
    {
        string chef;
        cin >> chef;
        chefs[chef]++;
        countries[mp[chef]]++;
    }
    ll mx_country = 0, mx_chef = 0;
    for(auto &[country, ct] : countries)
        mx_country = max(mx_country, ct);
    for(auto &[chef, ct] : chefs)
        mx_chef = max(mx_chef, ct);

    for(auto &[country, ct] : countries)
    {
        if(ct == mx_country)
        {
            cout << country << endl;
            break;
        }
    }

    for(auto &[chef, ct] : chefs)
    {
        if(ct == mx_chef)
        {
            cout << chef << endl;
            break;
        }
    }
}

signed main()
{
    FAST;
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    int TCS = 1;
    // cin >> TCS;
    for (int TC = 1; TC <= TCS; ++TC)
    {
        // cout<<"Case "<<TC<<": ";
        solve();
    }
}