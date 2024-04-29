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
const ll maxn = 3e4+1;

ll d[maxn],n;
vector<ll> st[maxn*4];

void build(ll id,ll l,ll r){
    if(l==r){
        st[id].pb(d[l]);
        return;
    }
    ll mid=(l+r)/2;
    build(id*2,l,mid);
    build(id*2+1,mid+1,r);
    st[id].resize(st[id*2].size()+st[id*2+1].size());
    merge(st[id*2].begin(),st[id*2].end(),st[id*2+1].begin(),st[id*2+1].end(),st[id].begin());
}
ll get_less_than_k(ll id,ll l,ll r,ll u,ll v,ll k){
    if(v<l||r<u) return 0;
    if(u<=l&&r<=v){
        return (r-l+1)-(upper_bound(st[id].begin(),st[id].end(),k)-st[id].begin());
    }
    ll mid=(l+r)/2;
    return get_less_than_k(id*2,l,mid,u,v,k)+get_less_than_k(id*2+1,mid+1,r,u,v,k);
}
int main(){
    //freopen(".INP", "r", stdin);
    //freopen(".OUT", "w", stdout);
    ios_base::sync_with_stdio(0);cin.tie(0);
    cin>>n;
    for(ll i=1;i<=n;i++) cin>>d[i];
    build(1,1,n);
    ll q;cin>>q;
    while(q--){
        ll u,v,k;cin>>u>>v>>k;
        print(get_less_than_k(1,1,n,u,v,k))
    }
}