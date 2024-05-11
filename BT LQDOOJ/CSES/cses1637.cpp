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
#define MASK(i) (1LL<<(i))
#define BIT(x,i) (((x)>>(i-1LL))&1LL)
#define all(v) (v).begin(),(v).end()

ll dp[1000100];
ll n;
vector<ll> chuso(ll k){
    vector<ll> t;
    while(k!=0){
        t.pb(k%10);
        k/=10;
    }
    return t;
}
int main(){
    //freopen(".INP", "r", stdin);
    //freopen(".OUT", "w", stdout);
    ios_base::sync_with_stdio(0);cin.tie(0);
    memset(dp,0x3f3f3f3f,sizeof(dp));
    cin>>n;
    FOR(i,1,9) dp[i]=1;
    for(ll i=10;i<=n;i++){
        for(ll x: chuso(i)){
            // cout<<x<<' ';
            dp[i] = min(dp[i],dp[i-x]+1);
        }
        // cout<<'\n';
    }
    print(dp[n])
}