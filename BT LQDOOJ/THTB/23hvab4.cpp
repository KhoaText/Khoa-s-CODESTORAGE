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
const ll maxn = 1e6+10;
ll d[maxn],dp[maxn],n,a,x,b,y;
int main(){
    // freopen("TRADER.INP", "r", stdin);
    // freopen("TRADER.OUT", "w", stdout);
    ios_base::sync_with_stdio(0);cin.tie(0);
    memset(dp,0xcfcfcfcf,sizeof(dp));
    cin>>n>>a>>x>>b>>y;
    if(a<b) {swap(a,b);swap(x,y);}
    for(ll i=1;i<=n;i++)cin>>d[i];
    dp[0] = 0;
    for(ll i = 1; i<=n;i++){
        if(i-a<0 && i-b<0)continue;
        if(i-a<0) {dp[i] = d[i] + dp[i-b] - y; continue;}
        dp[i] = d[i] + max(dp[i-a]-x,dp[i-b]-y);
    }
    print(dp[n])
}