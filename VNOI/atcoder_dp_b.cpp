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
const ll maxn = 1e5+100;
ll n,k,h[maxn],dp[maxn];
int main(){
    //freopen(".INP", "r", stdin);
    //freopen(".OUT", "w", stdout);
    ios_base::sync_with_stdio(0);cin.tie(0);
    memset(dp,0x3f3f3f3f,sizeof dp);
    cin>>n>>k;
    for(ll i =1;i<=n;i++)cin>>h[i];
    dp[1] = 0;
    for(ll i=2;i<=n;i++){
        for(ll j=1;j<=k;j++){
            if(i-j>=1) dp[i] = min(dp[i-j]+abs(h[i]-h[i-j]),dp[i]);
        }
    }
    print(dp[n]) 
}