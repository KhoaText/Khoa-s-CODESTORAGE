#include <bits/stdc++.h>
using namespace std;
#define MOD (ll)(1e9+7)
#define pb push_back
#define fi first
#define se second
#define FOR(i,l,r) for(ll i=(l),_r=(r);i<=_r;i++)
#define print(a) cout<<(a)<<"\n";
typedef long long ll;
typedef long double ld;
const ll maxn = 1e5+10;
ll n,q,bit[maxn];
void update(ll u, ll val){
    for(; u <= n; u += (u & (-u))){
        bit[u] += val;
    }
}
ll get(ll u){
    ll ans = 0;
    for(; u > 0; u -= (u & (-u))){
        ans += bit[u];
    }
    return ans;
}
ll main(){
    //freopen(".INP", "r", stdin);
    //freopen(".OUT", "w", stdout);
    ios_base::sync_with_stdio(0);cin.tie(0);
    cin>>n>>q;
    for(ll i=1;i<=n;i++){
        ll v;cin>>v;
        update(i,v);
    }
    while(q--){
        ll st,u,v;cin>>st>>u>>v;
        if(st ==1){
            update(u,v);
        }else{
            print(get(v)-get(u-1));
        }
    }
}