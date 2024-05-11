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

/*
8
abcddcba
1.nén
2.dp+for^3
*/
ll n,dp[501][501];
string s;
void compress(string &str){
    string tmp = "&";
    for(ll i=1;i<(ll)str.length();i++)if(str[i-1]!=str[i])tmp+=str[i];
    str = tmp;
}
void Init(){
    cin>>n>>s;
    s="&"+s;
    compress(s);
}
int main(){
    freopen("COLOA.inp", "r", stdin);
    freopen("COLOA.out", "w", stdout);
    ios_base::sync_with_stdio(0);cin.tie(0);
    memset(dp,0x3f3f3f3f,sizeof(dp));
    Init();
    n = s.length()-1;
    FOR(i,1,n) dp[i][i] = 1;
    FOR(r,1,n)FOR_NGUOC(l,r-1,1){
        dp[r][l] = min(dp[r-1][l]+1,dp[r][l]);
        FOR(k,l,r-1){
            if(s[k]==s[r]){
                dp[r][k] = min(dp[r][k],dp[r-1][k+1]+1);
            }else{
                dp[r][k] = min(dp[r][k],dp[r][k+1]+dp[k][l]);
            }
        }
    }
    print(dp[n][1]);
}