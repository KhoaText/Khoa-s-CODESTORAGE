#include <bits/stdc++.h>
using namespace std;
#define print(a) cout<<(a)<<"\n";
typedef long long ll;
ll n,q,a[100001],st[100001*4],lz[100001*4];
void build(ll id,ll l,ll r){
    if(l==r){
        st[id] = a[l];
        return;
    }
    ll mid= (l+r)/2;
    build(id*2,l,mid);
    build(id*2+1,mid+1,r);
    st[id] = st[id*2]+st[id*2+1];
}
void push(ll id,ll l,ll r,ll mid){
    lz[id*2] += lz[id];
    st[id*2] += lz[id] * (mid-l+1);
    lz[id*2+1] += lz[id];
    st[id*2+1] += lz[id] * (r-mid);
    lz[id] = 0;
}
void update(ll id,ll l,ll r,ll u,ll v,ll x){
    if(v<l||r<u) return;
    if(u<=l&&r<=v){
        st[id] += x * (r-l+1);
        lz[id] += x;
        return;
    }
    ll mid = (l+r)/2;
    push(id,l,r,mid);
    update(id*2,l,mid,u,v,x);
    update(id*2+1,mid+1,r,u,v,x);
    st[id] = st[id*2]+st[id*2+1];
}
ll getsum(ll id,ll l,ll r,ll u,ll v){
    if(v<l||r<u) return 0;
    if(u<=l&&r<=v){
        return st[id];
    }
    ll mid = (l+r)/2;
    push(id,l,r,mid);
    return getsum(id*2,l,mid,u,v)+getsum(id*2+1,mid+1,r,u,v);
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>q;
    for(ll i=1;i<=n;i++)cin>>a[i];
    build(1,1,n);
    while(q--){
        ll t;cin>>t;
        if(t==1){
            ll u,v,x;cin>>u>>v>>x;
            update(1,1,n,u,v,x);
        }else{
            ll u,v;cin>>u>>v;
            print(getsum(1,1,n,u,v))
        }
    }
}