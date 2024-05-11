#include <bits/stdc++.h>
using namespace std;
#define MOD (ll)(1e9+7)
#define pb push_back
#define fi first
#define se second
#define FOR(i,l,r) for(ll i=(l),_r=(r);i<=_r;i++)
#define FORJ(i,l,r,j) for(ll i=(l),_r=(r),_j=(j);i<=_r;i+=_j)
#define FOR_NGUOC(i,r,l) for(ll i=(r),_l=(l);i>=_l;i--)
#define print(a) cout<<(a)<<"\n";
typedef long long ll;
typedef long double ld;
#define MASK(i) (1LL<<(i))
#define BIT(x,i) (((x)>>(i-1LL))&1LL)
#define all(v) (v).begin(),(v).end()
const ll maxn = 1e5;
ll T,st[4*100100],d[100100];
void build(ll id,ll l,ll r){
    if(l==r){
        st[id] = d[l];
        return;
    }
    ll mid=(l+r)/2;
    build(id*2,l,mid);
    build(id*2+1,mid+1,r);
    st[id] = max(st[id*2],st[id*2+1]);
}
ll get(ll id,ll l,ll r,ll u,ll v){
    if(v<l||r<u) return 0;
    if(u<=l&&r<=v){
        return st[id];
    }
    ll mid=(l+r)/2;
    return max(get(id*2,l,mid,u,v),get(id*2+1,mid+1,r,u,v));
}
int main(){
    //freopen(".INP", "r", stdin);
    //freopen(".OUT", "w", stdout);
    ios_base::sync_with_stdio(0);cin.tie(0);
    d[1]=1;
    FOR(i,2,maxn){
        if(i&1) d[i] = d[i>>1LL] + d[(i>>1LL)+1];
        else d[i] = d[i>>1LL];
    }
    build(1,1,maxn);
    cin>>T;
    while(T--){
        ll a;cin>>a;
        print(get(1,1,maxn,1,a))
    }
}