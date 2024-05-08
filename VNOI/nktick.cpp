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

ll n,d[60100],v[60100],dp[60100];
int main(){
    //freopen(".INP", "r", stdin);
    //freopen(".OUT", "w", stdout);
    ios_base::sync_with_stdio(0);cin.tie(0);
    cin>>n;
    for(ll i=1;i<=n;i++)cin>>d[i];
    for(ll i=2;i<=n;i++)cin>>v[i];
    dp[1]=d[1];
    for(ll i=2;i<=n;i++){
        dp[i] = min(dp[i-2]+v[i],dp[i-1]+d[i]);
    }
    print(dp[n])
}