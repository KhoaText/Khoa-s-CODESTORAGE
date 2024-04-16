#include <bits/stdc++.h>
using namespace std;
#define MOD (ll)(1e9+7)
#define pb push_back
#define fi first
#define se second
#define print(a) cout<<(a)<<"\n";
typedef long long ll;
typedef long double ld;

ll n;
char a[1001][1001];
ll dp[1001][1001];
int main(){
    //freopen(".INP", "r", stdin);
    //freopen(".OUT", "w", stdout);
    ios_base::sync_with_stdio(0);cin.tie(0);
    cin>>n;
    for(ll i =1;i<=n;i++){
        string t;cin>>t;
        for(ll j =1;j<=n;j++) a[i][j] = t[j-1];
    }
    if(a[1][1] != '*') dp[1][1] =1;
    for(ll i =1;i<=n;i++){
        for(ll j =1;j<=n;j++){
            if(a[i][j]!='*') dp[i][j] += (dp[i-1][j]%MOD + dp[i][j-1]%MOD)%MOD;
        }
    }
    // for(ll i =1;i<=n;i++){
    //     for(ll j =1;j<=n;j++){
    //         cout<<dp[i][j]<<" ";
    //     }
    //     cout<<"\n";
    // }
    print(dp[n][n])
}