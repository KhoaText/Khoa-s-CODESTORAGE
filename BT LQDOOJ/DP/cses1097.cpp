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


ll n,s[5001],dp[5001][5001];
int main(){
    //freopen(".INP", "r", stdin);
    //freopen(".OUT", "w", stdout);
    ios_base::sync_with_stdio(0);cin.tie(0);
    cin>>n;
    FOR(i,1,n) cin>>s[i];
    FOR(i,1,n)dp[i][i] = s[i];
    FOR(r,1,n){
        FOR_NGUOC(l,r-1,1){
            dp[r][l] = -1e18;
            if(l==r-1) dp[r][r-1]=max(s[r],s[r-1]);
            else{
                // chon r
                if(s[r-1]<s[l]){
                    dp[r][l] = max(dp[r][l],dp[r-1][l+1]+s[r]);                
                }else{
                    if(s[r-1]==s[l])dp[r][l] = max({dp[r][r],dp[r-1][l+1]+s[r],dp[r-2][l]+s[r]});
                    else dp[r][l] = max(dp[r][l],dp[r-2][l]+s[r]);
                }
                // chon l 
                if(s[r]<s[l+1]){
                    dp[r][l] = max(dp[r][l],dp[r][l+2]+s[l]);                
                }else{
                    if(s[r-1]==s[l])dp[r][l] = max({dp[r][r],dp[r-1][l+1]+s[r],dp[r-2][l]+s[r]});
                    else dp[r][l] = max(dp[r][l],dp[r-1][l+1]+s[l]);
                }
            }
        }
    }
    // FOR(i,1,n){
    //     FOR(j,1,i)cout<<dp[i][j]<<" ";
    //     cout<<'\n';
    // }
    print(dp[n][1]);
}