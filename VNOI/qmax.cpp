#include <bits/stdc++.h>
using namespace std;
#define MOD (ll)(1e9+7)
#define pb push_back
#define fi first
#define se second
#define print(a) cout<<(a)<<"\n";
typedef long long ll;
typedef long double ld;

ll n,m;
ll st[50001*4];
void build(ll id,ll l, ll r){
    if(l == r){
        st[id] = 0;
        return;
    }
    ll mid = (l+r)/2;
    build(id*2,l,mid);
    build(id*2+1,mid+1,r);
    st[id] = 0;
}
void update_max(ll id,ll l,ll r,ll u, ll v, ll k){//this so dumb
    if(v<l||u>r) return;
    if(l == r){
        st[id] += k;
        return;
    }
    ll mid = (l+r)/2;
    update_max(id*2,l,mid,u,v,k);
    update_max(id*2+1,mid+1,r,u,v,k);
    st[id] = max(st[id*2],st[id*2+1]);
}
ll get_max(ll id,ll l,ll r,ll u, ll v){
    if(v<l||u>r) return 0;
    if(u<=l&&r<=v) return st[id];
    ll mid = (l+r)/2;
    return max(get_max(id*2,l,mid,u,v),get_max(id*2+1,mid+1,r,u,v));
}
int main(){
    //freopen(".INP", "r", stdin);
    //freopen(".OUT", "w", stdout);
    ios_base::sync_with_stdio(0);cin.tie(0);
    cin>>n>>m;
    build(1,1,n);
    for(ll i = 1;i<=m;i++){
        ll u,v,k;cin>>u>>v>>k;
        update_max(1,1,n,u,v,k);
    }
    ll q;cin>>q;
    while(q--){
        ll u,v;cin>>u>>v;
        print(get_max(1,1,n,u,v))
    }
}
// my ac one:
// ll n,m,a[50001];
// ll st[50001*4];
// void build(ll id,ll l, ll r){
//     if(l == r){
//         st[id] = (ll)a[l];
//         return;
//     }
//     ll mid = (l+r)/2;
//     build(id*2,l,mid);
//     build(id*2+1,mid+1,r);
//     st[id] = max(st[id*2],st[id*2+1]);
// }
// void update_max(ll l,ll r,ll k){
//     for(ll i=l;i<=r;i++){
//         a[i]+=k;
//     }
//     // for(ll i = 1;i<=n;i++){
//     //     cout<<a[i]<<" ";
//     // }
//     // cout<<"\n";
// }
// ll get_max(ll id,ll l,ll r,ll u, ll v){
//     if(v<l||r<u) return 0;
//     if(u<=l&&r<=v) return st[id];
//     ll mid = (l+r)/2;
//     return max(get_max(id*2,l,mid,u,v),get_max(id*2+1,mid+1,r,u,v));
// }
// int main(){
//     //freopen(".INP", "r", stdin);
//     //freopen(".OUT", "w", stdout);
//     ios_base::sync_with_stdio(0);cin.tie(0);
//     cin>>n>>m;
//     for(ll i = 1;i<=m;i++){
//         ll u,v,k;cin>>u>>v>>k;
//         update_max(u,v,k);
//     }
//     build(1,1,n);
//     // for(ll i = 1;i<=m;i++){
//     //     ll u,v,k;cin>>u>>v>>k;
//     //     update_max(u,v,k);
//     // }
//     ll q;cin>>q;
//     while(q--){
//         ll u,v;cin>>u>>v;
//         print(get_max(1,1,n,u,v))
//     }
// }