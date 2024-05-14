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
const ll maxn = 1e5+100;
ll n,q,d[maxn];
multiset<ll> st[maxn*4];
void build(ll id,ll l,ll r){
    if(l == r){
        st[id].insert(d[l]);
        return;
    }
    ll mid=(l+r)/2;
    build(id*2,l,mid);
    build(id*2+1,mid+1,r);
    merge(all(st[id*2]),all(st[id*2+1]),inserter(st[id],st[id].begin()));
}
void update(ll id,ll l,ll r, ll u, ll val){
    if(u<l||r<u) return;
    if(l==r){
        st[id].insert(val);
        st[id].erase(st[id].find(d[u]));
        return;
    }
    ll mid = (l+r)/2;
    update(id*2,l,mid,u,val);
    update(id*2+1,mid+1,r,u,val);
    st[id].insert(val);
    st[id].erase(st[id].find(d[u]));
}
ll get_min_atleast_k(ll id,ll l,ll r,ll u,ll v,ll k){
    if(v<l||r<u)return 1e18;
    if(u<=l&&r<=v){
        ll tmp = *st[id].lower_bound(k);
        return tmp<k?-1:tmp;
    }
    ll mid = (l+r)/2;
    ll res =  min(get_min_atleast_k(id*2,l,mid,u,v,k),
    get_min_atleast_k(id*2+1,mid+1,r,u,v,k));
    return res != 1e18?res:-1;
}
int main(){
    //freopen(".INP", "r", stdin);
    //freopen(".OUT", "w", stdout);
    ios_base::sync_with_stdio(0);cin.tie(0);
    cin>>n>>q;
    FOR(i,1,n) cin>>d[i];
    build(1,1,n);
    while(q--){
        ll st,a,b;cin>>st>>a>>b;
        if(st==1){
            update(1,1,n,a,b);
        }else{
            ll k;cin>>k;
            print(get_min_atleast_k(1,1,n,a,b,k))
        }
    }
}