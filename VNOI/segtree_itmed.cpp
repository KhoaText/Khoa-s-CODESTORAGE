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
ll n,k,d[maxn],dp[maxn],st[maxn*4];

void update(ll id,ll l,ll r,ll u,ll val){
    if(u<l||r<u)return;
    if(l==r){
        st[id] = val;
        return;
    }
    ll mid=(l+r)/2;
    update(id*2,l,mid,u,val);
    update(id*2+1,mid+1,r,u,val);
    st[id] = max(st[id*2],st[id*2+1]);
}
ll get_max(ll id,ll l,ll r,ll u,ll v){
    if(v<l||r<u) return -1e18;
    if(u<=l&&r<=v){
        return st[id];
    }
    ll mid=(l+r)/2;
    return max(get_max(id*2,l,mid,u,v),
    get_max(id*2+1,mid+1,r,u,v));
}
int main(){
    //freopen(".INP", "r", stdin);
    //freopen(".OUT", "w", stdout);
    ios_base::sync_with_stdio(0);cin.tie(0);
    cin>>n>>k;
    FOR(i,1,n)cin>>d[i];
    dp[1]=max(0LL,d[1]);
    update(1,1,n,1,dp[1]);
    FOR(i,2,n){
        ll tmp = get_max(1,1,n,i-k,i-1);
        dp[i] = max({0LL,d[i],tmp+d[i]});
        update(1,1,n,i,dp[i]);
    }
    print(st[1])
}