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
struct gd
{
    ll x,y,c;
};

const ll maxn = 1e5+10;
ll m,n,st[maxn*4],dp[maxn];
vector<gd> d;
void update(ll id,ll l,ll r,ll x,ll c){
    if(x<l||r<x) return;
    if(l==r){
        st[id] = c;
        return;
    }
    ll mid = (l+r)/2;
    update(id*2,l,mid,x,c);
    update(id*2+1,mid+1,r,x,c);
    st[id] = min(st[id*2],st[id*2+1]);
}
ll get_min(ll id,ll l,ll r,ll x,ll y){
    if(y<l||r<x) return 1e18;
    if(x<=l&&r<=y){
        return st[id];
    }
    ll mid = (l+r)/2;
    return min(get_min(id*2,l,mid,x,y),get_min(id*2+1,mid+1,r,x,y));
}
bool cmp(const gd &a,const gd &b){
    return (a.x!=b.y?a.x<b.x:a.y<b.y);
}
int main(){
    //freopen(".INP", "r", stdin);
    //freopen(".OUT", "w", stdout);
    ios_base::sync_with_stdio(0);cin.tie(0);
    memset(st,0x3f3f3f3f,sizeof(st));
    memset(dp,0x3f3f3f3f,sizeof(dp));
    cin>>n>>m;
    for(ll i=1;i<=m;i++){
        ll x,y,c;cin>>x>>y>>c;
        d.pb({x+1,min(n+1,y+1),c});
    }
    sort(d.begin(),d.end(),cmp);
    for(auto [x,y,c]: d){
        if(x==1){
            dp[1] = min(dp[1],c);
            dp[y] = min(dp[y],c);
            update(1,1,n+1,1,dp[1]);
            update(1,1,n+1,y,dp[y]);
        }else{
            ll tmp = get_min(1,1,n+1,x,y-1);
            // print(tmp)
            dp[y] = min(dp[y],tmp+c);
            update(1,1,n+1,y,dp[y]);
        }
    }
    print(dp[n+1])
}   