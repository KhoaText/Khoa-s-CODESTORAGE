#include <bits/stdc++.h>
using namespace std;
#define MOD (ll)(1e9+7)
#define pb push_back
#define fi first
#define se second
#define FOR(i,l,r) for(ll i=(l),_r=(r);i<=_r;i++)
#define FOR_NGUOC(i,r,l) for(ll i=(r),_l=(l);i>=_l;i--)
#define print(a) cout<<(a)<<"\n";
typedef long long ll;
typedef long double ld;
#define MASK(i) (1LL<<(i))
#define BIT(x,i) (((x)>>(i))&1LL)
#define all(v) (v).begin(),(v).end()


int main(){
    //freopen(".INP", "w", stdin);
    //freopen(".OUT", "w", stdout);
    ios_base::sync_with_stdio(0);cin.tie(0);
    multiset<ll> p = {1,1,1,1,4,5};
    auto pos = p.lower_bound(2);
    print(*pos)
    // merge(all(p),all(q),inserter(m,m.begin()));
    // for(ll x: p) cout<<x<< ' ';cout<<"\n";
    // for(ll x: q) cout<<x<< ' ';cout<<"\n";
    // for(ll x: m) cout<<x<< ' ';cout<<"\n";
} 