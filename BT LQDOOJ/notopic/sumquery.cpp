#include <bits/stdc++.h>
using namespace std;
#define MOD (ll)(1e9+7)
#define pb push_back
#define fi first
#define se second
#define print(a) cout<<(a)<<"\n";
typedef long long ll;
typedef long double ld;
const ll maxn = 2e5+1;
ll n,q,a[maxn],st[maxn*4];
void build(ll id,ll l,ll r){
    if(l == r){ 
        st[id] = a[l];
        return;
    }
    ll mid = (l+r)/2;
    build(id*2,l,mid);
    build(id*2+1,mid+1,r);
    st[id] = st[id*2]+st[id*2+1];
}
void update(ll id,ll l,ll r,ll u, ll val){
    if(u<l||r<u) return;
    if(l == r){
        st[id] = val; 
        return;
    }
    ll mid = (l+r)/2;
    update(id*2,l,mid,u,val);
    update(id*2+1,mid+1,r,u,val);
    st[id] = st[id*2]+st[id*2+1];
}
ll getsum(ll id,ll l,ll r,ll u, ll v){
    if(v<l||r<u) return 0;
    if(u<=l&&r<=v) return st[id];
    ll mid = (l+r)/2;
    return getsum(id*2,l,mid,u,v)+getsum(id*2+1,mid+1,r,u,v);
}
int main(){
    //freopen(".INP", "r", stdin);
    //freopen(".OUT", "w", stdout);
    ios_base::sync_with_stdio(0);cin.tie(0);
    cin>>n>>q;
    for(ll i = 1;i<=n;i++) cin>>a[i];
    build(1,1,n);
    while(q--){
        ll t,u,v;cin>>t>>u>>v;
        if(t == 1){
            print(getsum(1,1,n,u,v));
        }else{
            update(1,1,n,u,v);
        }

    }

}