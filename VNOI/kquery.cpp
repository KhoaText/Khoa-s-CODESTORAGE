#include <bits/stdc++.h>
using namespace std;
#define MOD (ll)(1e9+7)
#define pb push_back
#define fi first
#define se second
#define print(a) cout<<(a)<<"\n";
typedef long long ll;
typedef long double ld;
ll n,q,a[30001];
ll st[30001*4];
void build(ll id,ll l,ll r){
    if(l==r){
        st[id] = a[l];
        return;
    }
    ll mid = (l+r)/2;
    build(id*2,l,mid);
    build(id*2+1,mid+1,r);
    st[id] = max(st[id*2],st[id*2+1]);
}
ll get_larger(ll id,ll l,ll r,ll u,ll v, ll k){
    ll res = 0;
    if(v<l||u>r){
        return 0;
    }
    if(l == r && st[id]>k){
        return 1;
    }
    if(u<=l&&r<=v){
        if(st[id]<=k){
            return 0;
        }
    }
    ll mid = (r+l)/2;
    res += get_larger(id*2,l,mid,u,v,k);
    res += get_larger(id*2+1,mid+1,r,u,v,k);
    return res;
}
int main(){
    //freopen(".INP", "r", stdin);
    //freopen(".OUT", "w", stdout);
    ios_base::sync_with_stdio(0);cin.tie(0);
    cin>>n;
    for(ll i =1;i<=n;i++) cin>>a[i];
    build(1,1,n);
    cin>>q;
    while(q--){
        ll u,v,k;cin>>u>>v>>k;
        print(get_larger(1,1,n,u,v,k))
    }
}
