#include <bits/stdc++.h>
using namespace std;
#define MOD (ll)(1e9+7)
#define pb push_back
#define fi first
#define se second
#define print(a) cout<<(a)<<"\n";
typedef long long ll;
typedef long double ld;

ll n,m;
ll dp[1000001];
ll a[101];
int main(){
    //freopen(".INP", "r", stdin);
    //freopen(".OUT", "w", stdout);
    ios_base::sync_with_stdio(0);cin.tie(0);
    cin>>n>>m;
    for(ll i = 1;i<=m;i++){
        dp[i] = 1e18;
    }
    for(ll i =1;i<=n;i++){
        cin>>a[i];
    }
    for(ll i = 0;i<m;i++){
        for(ll j = 1;j<=n;j++){
            if(i+a[j]>m)continue;
            dp[i+a[j]] = min(dp[i]+1,dp[i+a[j]]);
        }
    }
    // for(ll i = 1;i<=m;i++)print(dp[i])
    print(dp[m]!=1e18?dp[m]:-1)
}