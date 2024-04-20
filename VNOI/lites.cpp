#include <bits/stdc++.h>
using namespace std;
#define MOD (ll)(1e9+7)
#define pb push_back
#define fi first
#define se second
#define print(a) cout<<(a)<<"\n";
typedef long long ll;
typedef long double ld;
ll n,q,st[400001];
bool flip[400001];
void push(ll id,ll l,ll r,ll mid){
    if(!flip[id]) return;
    flip[id*2] ^= 1;
    flip[id*2+1] ^= 1;
    st[id*2] = (mid - l + 1) - st[id*2];
    st[id*2+1] = (r-mid) - st[id*2+1];
    flip[id] = 0;
}
void update_revli(ll id,ll l,ll r,ll u,ll v){
    if(v<l||r<u) return;
    if(u<=l&&r<=v){
        flip[id] = !flip[id];
        st[id] = (r-l+1) - st[id];
        return;
    }
    ll mid = (l+r)/2;
    push(id,l,r,mid);
    update_revli(id*2,l,mid,u,v);
    update_revli(id*2+1,mid+1,r,u,v);
    st[id] = st[id*2] + st[id*2+1];
}
ll get_li(ll id,ll l,ll r,ll u,ll v){
    if(v<l||r<u)return 0;
    if(u<=l&&r<=v){
        return st[id];
    }
    ll mid = (l+r)/2;
    push(id,l,r,mid);
    ll t1 = get_li(id*2,l,mid,u,v);
    ll t2 = get_li(id*2+1,mid+1,r,u,v);
    return t1+t2;
}

int main(){
    //freopen(".INP", "r", stdin);
    //freopen(".OUT", "w", stdout);
    ios_base::sync_with_stdio(0);cin.tie(0);
    cin>>n>>q;
    while(q--){
        ll a,u,v;cin>>a>>u>>v;
        if(a){
            print(get_li(1,1,n,u,v));
        }else{
            update_revli(1,1,n,u,v);
        }
    }
}
