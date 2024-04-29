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
ll q;
ll dp[10][200001][10];
int main(){
    freopen("CONG.INP", "r", stdin);
    freopen("CONG.OUT", "w", stdout);
    ios_base::sync_with_stdio(0);cin.tie(0);
    FOR(i,0,9){
        dp[i][0][i]=1;
    }
    FOR(i,0,9){
        FOR(j,1,200000){
            FOR(z,1,9){
                dp[i][j][z]=dp[i][j-1][z-1]%MOD;
                dp[i][j][z]%=MOD;
            }
            dp[i][j][0]=dp[i][j-1][9];dp[i][j][0]%=MOD;
            dp[i][j][1]=(dp[i][j][1]+dp[i][j-1][9])%MOD;
        }
    }
    cin>>q;
    while(q--){
        ll n,k,t=0;cin>>n>>k;
        while(n){
            ll a=n%10;
            n/=10;
            for(ll i=0;i<=9;i++){
                t+=dp[a][k][i]%MOD;
                t%=MOD;
            }
        }
        print(t)
    }
}