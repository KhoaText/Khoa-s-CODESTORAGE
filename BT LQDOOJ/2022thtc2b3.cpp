#include <bits/stdc++.h>
using namespace std;
#define MOD (ll)(1e9+7)
#define pb push_back
#define fi first
#define se second
#define FOR(i,l,r) for(ll i=(l),_r=(r);i<=_r;i++)
#define print(a) cout<<(a)<<"\n";
typedef long long ll;
typedef long double ld;
const ll maxn =150001;
ll n,ans,d[maxn],max_st[maxn*4],min_st[maxn*4];
void build(ll id,ll l,ll r){
    if(l==r){
        max_st[id]=min_st[id]=d[l];
        return;
    }
    ll mid = (l+r)/2;
    build(id*2,l,mid);
    build(id*2+1,mid+1,r);
    max_st[id]=max(max_st[id*2],max_st[id*2+1]);
    min_st[id]=min(min_st[id*2],min_st[id*2+1]);
}
ll max_in(ll id,ll l,ll r,ll u,ll v){
    if(v<l||r<u) return 0;
    if(u<=l&&r<=v){
        return max_st[id];
    }
    ll mid= (l+r)/2;
    return max(max_in(id*2,l,mid,u,v),max_in(id*2+1,mid+1,r,u,v));
}
ll min_in(ll id,ll l,ll r,ll u,ll v){
    if(v<l||r<u) return 1e10;
    if(u<=l&&r<=v){
        return min_st[id];
    }
    ll mid=(l+r)/2;
    return min(min_in(id*2,l,mid,u,v),min_in(id*2+1,mid+1,r,u,v));
}
int main(){
    freopen("BOBASO.INP", "r", stdin);
    freopen("BOBASO.OUT", "w", stdout);
    ios_base::sync_with_stdio(0);cin.tie(0);
    cin>>n;
    FOR(i,1,n) cin>>d[i];
    build(1,1,n);
    FOR(i,1,n-2){
        FOR(j,i+1,n-1){
            ll a1= max_in(1,1,n,1,i);
            ll a2 = max_in(1,1,n,i+1,j);
            ll a3 = min_in(1,1,n,j+1,n);
            ans = max(ans,3*a1+2*a2-5*a3);
        }
    }
    print(ans)
}