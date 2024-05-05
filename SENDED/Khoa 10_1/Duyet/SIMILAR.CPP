#include <bits/stdc++.h>
using namespace std;
#define MOD (ll)(1e9+7)
#define pb(n) push_back(n)
#define print(a) cout<<a<<"";
typedef long long ll;
typedef long double ld;
ll tongchuso(ll n){
    ll s=0;
    while(n!=0){
        s+=n%10;
        n/=10;
    }
    return s;
}
pair<ll,ll> dp[63+1];
int main(){
    for(ll i=1;i<=63;i++) dp[i].first=10000000;
    freopen("SIMILAR.INP", "r", stdin);
    freopen("SIMILAR.OUT", "w", stdout);
    ios_base::sync_with_stdio(0);cin.tie(0);
    ll l,r;cin>>l>>r;
    ll mx = 0;
    for(ll i=l;i<=r;i++){
        ll s = tongchuso(i);
        dp[s].first = min(i,dp[s].first);
        dp[s].second = max(i,dp[s].second);
        // cout<<dp[s].first<<" "<<dp[s].second<<"\n";
        mx = max(mx,dp[s].second-dp[s].first);
    }
    print(mx)
}