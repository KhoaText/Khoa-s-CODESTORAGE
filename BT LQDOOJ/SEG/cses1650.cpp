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
const ll maxn = 2e5+1;
ll d[maxn],st[maxn*4],n,q;
void build(ll id,ll l,ll r){
    if(l==r){
        st[id] = d[l];
        return;
    }
    ll mid=(l+r)/2;
    build(id*2,l,mid);
    build(id*2+1,mid+1,r);
    st[id] = st[id*2]^st[id*2+1];
}
ll getxor(ll id,ll l,ll r,ll u,ll v){
    if(v<l||r<u) return 0;
    if(u<=l&&r<=v) return st[id];
    ll mid=(l+r)/2;
    return getxor(id*2,l,mid,u,v)^getxor(id*2+1,mid+1,r,u,v);
}
int main(){
    //freopen(".INP", "r", stdin);
    //freopen(".OUT", "w", stdout);
    ios_base::sync_with_stdio(0);cin.tie(0);
    cin>>n>>q;
    FOR(i,1,n)cin>>d[i];
    build(1,1,n);
    while(q--){
        ll u,v;cin>>u>>v;
        print(getxor(1,1,n,u,v))
    }
}