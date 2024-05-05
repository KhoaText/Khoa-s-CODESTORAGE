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
// ll len = 0;
// ll binsearch(ll k){
//     ll res = 0;
//     ll lo=0,hi=len;
//     while(lo<=hi){
//         ll mid = (lo + hi)/2;
//         if(dp[mid].fi<k){
//             lo = mid + 1;
//             res = mid;
//         }else{
//             hi = mid-1;
//         }
//     }
//     return res;
// }

const ll maxn = 5e5+50;
ll n,ans,a[maxn],w[maxn],dp[maxn]; 
int main(){
    freopen("QUA.INP", "r", stdin);
    freopen("QUA.OUT", "w", stdout);
    ios_base::sync_with_stdio(0);cin.tie(0);
    cin>>n;
    for(ll i=1;i<=n;i++)cin>>a[i]>>w[i];
    dp[1] = w[1];
    for(ll i=2;i<=n;i++){
        ll mx_w = 0;
        for(ll j=1;j<i;j++){
            if(a[j]<a[i]) mx_w = max(mx_w,dp[j]);
        }
        dp[i] = mx_w + w[i];
        ans = max(ans,dp[i]);
    }
    print(ans)
}