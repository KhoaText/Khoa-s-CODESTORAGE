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

ll n,q,st[4*100100];
void update(ll id,ll l,ll r,ll x,ll val){
    if(x<l||r<x)return;
    if(l == r) {st[id] = val;return;}
    ll mid=(l+r)/2;
    update(id*2,l,mid,x,val);
    update(id*2+1,mid+1,r,x,val);
    st[id] = st[id*2]+st[id*2+1];
}
ll get(ll id,ll l,ll r,ll u,ll v){
    if(v<l||r<u)return 0;
    if(u<=l&&r<=v)return st[id];
    ll mid = (l+r)/2;
    return get(id*2,l,mid,u,v)+get(id*2+1,mid+1,r,u,v);
}
int main(){
    //freopen(".INP", "r", stdin);
    //freopen(".OUT", "w", stdout);
    ios_base::sync_with_stdio(0);cin.tie(0);
    cin>>n>>q;
    while(q--){
        ll st,a,b;cin>>st>>a>>b;
        if(st==1){
            update(1,1,n,a,b);
        }
        else{
            print(get(1,1,n,a,b))
        }
    }
}