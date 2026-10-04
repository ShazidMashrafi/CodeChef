#include <bits/stdc++.h>
using namespace std;
#if defined(LOCAL) && !defined(ONLINE_JUDGE)
#include <debug.h>
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

int hasPairWithDifference(auto& A, int N, int B)
{
    unordered_map<int,int>mp;
    for(int i = 0; i < N; ++i) {
        mp[A[i]] = i;
        int d1 = A[i] + B;
        int d2 = A[i] - B;
        if(mp.count(d1) && mp[d1] != i) {
            return 1;
        }
        if(mp.count(d2) && mp[d2] != i) {
            return 1;
        }
    }
    return 0;
}