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
const ll maxn = 1e5+10;
ll n,st[maxn*4],lazy[maxn*4],d[maxn];
void build(ll id,ll l,ll r){
    if(l == r){
        st[id]=d[l];
        return;
    }
    ll mid = (l+r)/2;
    build(id*2,l,mid);
    build(id*2+1,mid+1,r);
    st[id] = max(st[id*2],st[id*2+1]);

}
void push(ll id){
    st[id*2] += lazy[id];
    lazy[id*2]+= lazy[id];
    st[id*2+1] += lazy[id];
    lazy[id*2+1] += lazy[id];
    lazy[id] = 0;
}
void update(ll id,ll l,ll r,ll u, ll v,ll val){
    if(v<l||r<u) return;
    if(u<=l&&r<=v){
        lazy[id] += val;
        st[id] += val;
        return;
    }
    ll mid = (l+r)/2;
    push(id);
    update(id*2,l,mid,u,v,val);
    update(id*2+1,mid+1,r,u,v,val);
    st[id] = max(st[id*2],st[id*2+1]);
}
ll get_max(ll id,ll l,ll r,ll u,ll v){
    if(v<l||r<u) return -1e18;
    if(u<=l&&r<=v){
        return st[id];
    }
    ll mid = (l+r)/2;
    push(id);
    return max(get_max(id*2,l,mid,u,v),get_max(id*2+1,mid+1,r,u,v));
}
int main(){
    //freopen(".INP", "r", stdin);
    //freopen(".OUT", "w", stdout);
    ios_base::sync_with_stdio(0);cin.tie(0);
    cin>>n;
    FOR(i,1,n)cin>>d[i];
    build(1,1,n);
    ll TT;cin>>TT;
    while(TT--){
        int st;cin>>st;
        if(st==1){
            ll u,v,k;cin>>u>>v>>k;
            update(1,1,n,u,v,k);
        }else{
            ll u,v;cin>>u>>v;
            print(get_max(1,1,n,u,v));
        }
    }
}