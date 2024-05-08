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
ll n,h[maxn],dp[maxn];
int main(){
    //freopen(".INP", "r", stdin);
    //freopen(".OUT", "w", stdout);
    ios_base::sync_with_stdio(0);cin.tie(0);
    cin>>n;
    for(ll i =1;i<=n;i++)cin>>h[i];
    for(ll i=2;i<=n;i++){
        if(i-2<1&&i-1<1) continue;
        if(i-2<1){
            dp[i] = dp[i-1] + abs(h[i]-h[i-1]);
        }else{
            dp[i] = min(dp[i-1]+abs(h[i]-h[i-1]),dp[i-2]+abs(h[i]-h[i-2]));
        }
    }
    print(dp[n])
}