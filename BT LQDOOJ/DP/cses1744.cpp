#include <bits/stdc++.h>
using namespace std;
#define MOD (ll)(1e9+7)
#define pb push_back
#define fi first
#define se second
#define FOR(i,l,r) for(ll i=(l),_r=(r);i<=_r;i++)
#define FOR_NGUOC(i,r,l) for(ll i=(r),_l=(l);i>=_l;i--)
#define print(a) cout<<(a)<<"\n";
typedef long long ll;
typedef long double ld;
#define MASK(i) (1LL<<(i))
#define BIT(x,i) (((x)>>(i-1LL))&1LL)
#define all(v) (v).begin(),(v).end()


ll dp[501][501];
ll a,b;
int main(){
    //freopen(".INP", "r", stdin);
    //freopen(".OUT", "w", stdout);
    ios_base::sync_with_stdio(0);cin.tie(0);
    cin>>a>>b;
    if(a>b)swap(a,b);
    for(ll i=0;i<=a;i++){
        for(ll j=0;j<=b;j++){
            dp[i][j]=1e9;
            if(i==j) dp[i][j]=0;
            else{
                for(ll k=1;k<i;k++){
                    dp[i][j] = min(dp[i][j],dp[k][j]+dp[i-k][j]+1);
                }
                for(ll k=1;k<j;k++){
                    dp[i][j] = min(dp[i][j],dp[i][k]+dp[i][j-k]+1);
                }
            }
        }
    }
    // for(ll i=1;i<=a;i++){
    //     for(ll j=1;j<=b;j++) cout<<dp[i][j]<< " ";
    //     cout<<'\n';
    // }
    print(dp[a][b]);
}