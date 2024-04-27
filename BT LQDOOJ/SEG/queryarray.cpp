#include <bits/stdc++.h>
using namespace std;
#define MOD (ll)(1e9+7)
#define pb push_back
#define fi first
#define se second
#define print(a) cout<<(a)<<"\n";
typedef long long ll;
typedef long double ld;
ll n,q,st[400001],lz[400001];
void push(ll id, ll l, ll r, ll mid){
    // ll mid = (l+r)/2;
    lz[id*2]+=lz[id];
    lz[id*2+1]+=lz[id];
    st[id*2] += (mid-l+1)*lz[id];
    st[id*2+1] += (r-mid)*lz[id];
    lz[id] = 0;
}
void update(ll id,ll l,ll r,ll u,ll v,ll val){
    if(v<l||r<u) return;
    if(u<=l&&r<=v){
        st[id]+=(l-r+1)*val;
        lz[id]+= val;
        return;
    }
    ll mid = (l+r)/2;
    push(id,l,r,mid);
    update(id*2,l,mid,u,v,val);
    update(id*2+1,mid+1,r,u,v,val);
    st[id] = st[id*2]+st[id*2+1];
}
void printtree(ll id,ll l,ll r){
    if(l == r){
        cout<<st[id]<<" ";
        return;
    }
    ll mid = (l+r)/2;
    push(id,l,r,mid);
    printtree(id*2,l,mid);
    printtree(id*2+1,mid+1,r);
}
int main(){
    //freopen(".INP", "r", stdin);
    //freopen(".OUT", "w", stdout);
    ios_base::sync_with_stdio(0);cin.tie(0);
    cin>>n>>q;
    while(q--){
        ll st,u,v,val;
        cin>>st>>u>>v>>val;
        update(1,1,n,u,v,(st==1?val:-val));
    }
    printtree(1,1,n);
}