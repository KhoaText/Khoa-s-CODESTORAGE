#include <bits/stdc++.h>
using namespace std;
#define MOD (ll)(1e9+7)
#define pb push_back
#define fi first
#define se second
#define print(a) cout<<(a)<<"\n";
typedef long long ll;
typedef long double ld;

int dp[2000001];
int a[101];
ll n,x;
int main(){
    //freopen(".INP", "r", stdin);
    //freopen(".OUT", "w", stdout);
    ios_base::sync_with_stdio(0);cin.tie(0);
    dp[0] = 1;
    cin>>n>>x;
    for(ll i =1;i<=n;i++) cin>>a[i];
    for(ll i = 0;i<x;i++){
        if(dp[i]){
            for(ll j=1;j<=n;j++){
                dp[i+a[j]] += dp[i]%MOD;
                dp[i+a[j]]%=MOD;
            }
        }
    }
    print(dp[x])
}