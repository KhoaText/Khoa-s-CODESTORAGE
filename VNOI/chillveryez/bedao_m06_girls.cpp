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
const ll maxn =1e6+100;
ll d[maxn],dp[maxn],n,m,k,ans = -2;
int main(){
    //freopen(".INP", "r", stdin);
    //freopen(".OUT", "w", stdout);
    ios_base::sync_with_stdio(0);cin.tie(0);
    cin>>n>>m>>k;
    for(ll i=1;i<=n;i++)cin>>d[i];
    sort(d+1,d+1+n);
    for(ll i=1;i<=n;i++){
        dp[i] +=d[i]+dp[i-1];
    }
    for(ll i=1;i<=n-m+1;i++){
        if(d[i+m-1]-d[i]<=k){
            ans = max(ans,dp[i+m-1]-dp[i-1]);
        }
    }
    print(ans)
}
