#include <bits/stdc++.h>
using namespace std;
#define MOD (ll)(1e9+7)
#define pb push_back
#define fi first
#define se second
#define print(a) cout<<(a)<<"\n";
typedef long long ll;
typedef long double ld;
const ll maxn = 100001;
ll n,a[maxn],st[maxn*4];

void build(ll id,ll l,ll r){
    if(l==r){
        st[id]=a[l];
        return;
    }
    ll mid = (l+r)/2;
    build(id*2,l,mid);
    build(id*2+1,mid+1,r);
    st[id] = max(st[id*2],st[id*2+1]);
}
void update_max(ll id,ll l,ll r,ll x,ll val){
    if(x<l||r<x) return;
    if(l==r){
        st[id] = val;
        return;
    }
    ll mid = (l+r)/2;
    update_max(id*2,l,mid,x,val);
    update_max(id*2+1,mid+1,r,x,val);
    st[id] = max(st[id*2],st[id*2+1]);
}
ll get_max(ll id,ll l,ll r,ll x,ll y){
    if(y<l||r<x) return -1e18;
    if(x<=l&&r<=y){
        return st[id];
    }
    ll mid = (l+r)/2;
    return max(get_max(id*2,l,mid,x,y),get_max(id*2+1,mid+1,r,x,y));
}
int main(){
    //freopen(".INP", "r", stdin);
    //freopen(".OUT", "w", stdout);
    ios_base::sync_with_stdio(0);cin.tie(0);
    cin>>n;
    for(ll i=1;i<=n;i++) cin>>a[i];
    build(1,1,n);
    ll q;cin>>q;
    while(q--){
        ll st,x,y;cin>>st>>x>>y;
        if(st==1){
            update_max(1,1,n,x,y);
        }else{
            print(get_max(1,1,n,x,y));
        }
    }
}